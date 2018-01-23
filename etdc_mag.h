#ifndef ETDC_MAG_H
#define ETDC_MAG_H

long long v_count = 0;
long long verif = 0;
long pattern_text_size =0;
int pattern_size = 0;
int patt_size = 0;
unsigned long text_size = 0;

unsigned long *l2;

#include "common.h"
#include "etdc_tool.h"
#include <unordered_set>
#include <map>

using namespace ETDC;

t_timemes t_pos_find = {0};

uint32_t *etdc_idxs = NULL;
std::unordered_map<int, std::string> map_etdc_to_str;
int index_number = 0;
long offset = 0;
std::unordered_set<unsigned long> indexes;

byte *text = NULL;

int pelem_compar_bytes;

typedef struct {
	byte * pattern;
	byte * op;
	int offset;
	int length;
} pelem;

typedef struct {
	pelem * list;
	int count;
} plist;

plist *indexed_patterns = NULL;

byte *patterns_text = NULL;

byte patterns2[40000][200];
long patterns_number = 0;

int pelem_compar (const pelem* a, const pelem* b) {
	return memcmp(a->pattern, b->pattern, pelem_compar_bytes);
}

/* Declarations */
template <unsigned int U, unsigned int K, unsigned int Q, unsigned int SIGMA> int etdc_mag();
template <unsigned int Q, unsigned int SIGMA> void etdc_mag_build_indexed_patterns();

/* Printing function */
void print_result(double pos_find_time, double pre_time, double search_time, 
	long ver_count, long while_loops, long matches, long sigma, long super_sigma,
	long enc_text_file_size, long processed_text_file_size, long dict_file_size, long idx_size, int denominator,
	long offset, long pattern_size, size_t map_el_count
) {
	double inmb = processed_text_file_size / 1000.0 / 1000.0;
	double pre_search_time = pre_time + search_time;
	printf("%ld\t%ld\t", sigma, super_sigma);												// sigmas
	printf("%ld\t%d\t%ld\t", pattern_size, denominator, offset);							// pattern size, denominator, offset
	printf("%ld\t%ld\t%ld\t%ld\t%d\t%f\t%f\t",												// data information
		enc_text_file_size, processed_text_file_size, dict_file_size, idx_size, 
		map_el_count * sizeof(int) + dict_file_size,
		(double)(enc_text_file_size+idx_size+dict_file_size)/(double)enc_text_file_size,
		(double)(enc_text_file_size+idx_size+dict_file_size)/(double)processed_text_file_size
	);
	printf("%ld\t%ld\t%ld\t", ver_count, while_loops, matches);								// search information
	printf("%f\t%f\t%f\t%f\t", pos_find_time, pre_time, search_time, pre_search_time);		// times
	printf("%f\t%f", inmb/search_time, inmb/pre_search_time);								// speed
	printf("\n");
}

/* Definitions */

int map [256];	// if overoaded then probably std::map is conflicted

template <unsigned int Q, unsigned int SIGMA> struct get_ { 
    static unsigned long long int gram(const uchar * s, const long start /* at start set to 1 */) {
        return map[s[Q - 1]] * start + get_<Q - 1, SIGMA>::gram(s, start*SIGMA);
    }
};

template <unsigned int SIGMA> struct get_<0, SIGMA> { 
    static unsigned int gram(const uchar * s, const long start /* at start set to 1 */) { return 0; }
};

template <class T, unsigned int Q, unsigned int SIGMA> encoded_text_type * encode(T * t) {
	encoded_text_type * p = (encoded_text_type *)malloc(sizeof( encoded_text_type ) * patt_size);
	for (long int i = 0, it = 0; it < patt_size; i+=Q, ++it) {
		p [it] = get_<Q, SIGMA>::gram(t + i, 1);
	}
	return p;
}

template<unsigned int Q, unsigned int SIGMA> 
struct get_super_ {
	static unsigned long sigma() {
		return get_super_<Q-1, SIGMA>::sigma() * SIGMA;
	}
};

template<unsigned int SIGMA> 
struct get_super_<0, SIGMA> {
	static unsigned long sigma() {
		return 1;
	}
};

template<class T> int CreateMap(T* t, int n) {
	// Map array creation
	int sigma = 0;
	bool symbols [256];
	for (int i = 0; i < 256; ++i) symbols[i] = 0;
	for (long i = 0; i < n; ++i) 
		symbols[ t[i] ] = true;

	for (int i = 0; i < 256; ++i) map[i] = 0;
	for (int i = 0; i < 256; ++i) {
		if ( symbols[i] ) {
			map[i] = sigma++;
		}
	}
	return sigma;
}


bool CreateMapByHistogram_compar (unsigned long* i, unsigned long* j) { return (*i > *j); }

template<class T> int CreateMapByHistogram(T* t, int n) {
	// Map array creation
	int sigma = 0;
	int threshold = 22;
	unsigned long symbols [256];
	unsigned long * symbolsp[256];
	for (int i = 0; i < 256; ++i) {
		symbols[i] = 0;
		symbolsp[i] = &(symbols[i]);
	}
	for (long i = 0; i < n; ++i) 
		symbols[ t[i] ] ++;
	std::sort(symbolsp, &(symbolsp[255]), CreateMapByHistogram_compar);
	for (int i = 0; i < 256; ++i) map[i] = 0;
	for (int i = 0; i < threshold; ++i) {
		if(*symbolsp[i]) {
			*symbolsp[i] = sigma++;
		} else {
			*symbolsp[i] = sigma-1;
		}
	}
	for (int i = threshold; i < 256; ++i) {
		*symbolsp[i] = sigma<threshold?sigma-1:threshold-1;
	}
	for (int i = 0; i < 256; ++i) {
		if ( symbols[i] ) {
			map[i] = symbols[i];
		}
	}
	return sigma;
}

template<class T, unsigned int NEW_SIGMA> int CreateMapByHistogramBinPack(T* t, int n) {
	// Map array creation
	int sigma = 0;
	unsigned long symbols [256];
	unsigned long * symbolsp[256];
	long sum = 0;
	int binSize = n / (NEW_SIGMA-1);
	for (int i = 0; i < 256; ++i) {
		symbols[i] = 0;
		symbolsp[i] = &(symbols[i]);
	}
	for (long i = 0; i < n; ++i) 
		symbols[ t[i] ] ++;

	std::sort(symbolsp, &(symbolsp[255]), CreateMapByHistogram_compar);
	// symbolsp is now most common symbols (the most at first position)

	for (int i = 0; i < 256; ++i) map[i] = 0;
	for (int i = 0; i < 256; ++i) {
		sum += *symbolsp[i];
		if(sum >= binSize) {
			sum = sum - binSize;
			*symbolsp[i] = sigma++;
		} else {
			*symbolsp[i] = sigma;
		}
	}
	
	for (int i = 0; i < 256; ++i) {
		map[i] = symbols[i];
	}

	//for(unsigned int i = 0; i < 256; i++) { printf("map[%c (%d) ] = %d\n", (char)i, i, map[i]); }

	return ++sigma;
}

template<class T> int CreateMapByHistogramBinPackNextElem(T* t, int n, int new_sigma) {
	// Map array creation
	int sigma = 0;
	new_sigma--;
	unsigned long symbols [256];
	unsigned long * symbolsp[256];
	long sum = 0;
	int binSize = n / new_sigma;
	for (int i = 0; i < 256; ++i) {
		symbols[i] = 0;
		symbolsp[i] = &(symbols[i]);
	}
	for (long i = 0; i < n; ++i) 
		symbols[ t[i] ] ++;

	std::sort(symbolsp, &(symbolsp[255]), CreateMapByHistogram_compar);
	// symbolsp is now most common symbols (the most at first position)

	for (int i = 0; i < 256; ++i) map[i] = 0;
	for (int i = 0; i < 256; ++i) {
		sum += *symbolsp[i];
		if(sum >= binSize) {
			sum = sum - binSize;
			*symbolsp[i] = sigma++;
		} else if( i < 255 && sum + *symbolsp[i+1] > binSize && abs( (long)((sum + *symbolsp[i+1]) - binSize) ) > abs((long)(sum - binSize)) ) {
			sum = sum + *symbolsp[i+1] - binSize;
			*symbolsp[i] = sigma;
			*symbolsp[i+1] = sigma;
			sigma++;
			i++;
		} else {
			*symbolsp[i] = sigma;
		}
	}
	
	for (int i = 0; i < 256; ++i) {
		map[i] = symbols[i];
	}

	for(unsigned int i = 0; i < 256; i++) { printf("map[%c (%d) ] = %d\n", (char)i, i, map[i]); }

	return ++sigma;
}


static int	* build_verify_table( int m, int k, int r, int l ) {
	int	mk;
	int	h;
	int	mpk = m / k;
	int	c, f, * t;

	t = (int*)malloc( MAX_WORD_SIZE * sizeof( int ));

	for( f = 0; f < r; f++ ) {
		c = ( 1 - f - mpk ) * k;
		mk = ( mpk * l - 1 + f * l );

		for( h = 0; h < k; h++, c-- ) {
			t[ mk ] = c; 
			mk += mpk * l + r - 1;
		}
	}

	return t;
}


template <unsigned int Q, unsigned int SIGMA> static void etdc_mag_verification( word d, word mm, int pos, int * vt )
{
	int s, c;
	d = ( d & mm ) ^ mm;
	++v_count;
	int index1;
	pelem el;
	el.offset = 0;
	pelem *el2;
	pelem* ref = NULL;
	while( d ) {
		s = d>=log2cache?ilog2(d):log2v[d];
		c = vt[ s ] * Q + pos;
		verif++;
		el.pattern = text + c;
		index1 = get_<Q, SIGMA>::gram(el.pattern, 1);

		el2 = (pelem*)bsearch(&el, indexed_patterns[index1].list, indexed_patterns[index1].count, sizeof(pelem), (int (*)(const void *, const void *))pelem_compar);
		if(el2) {
			ref = el2;
			while( el2 - indexed_patterns[index1].list >= 0 && memcmp(el2->pattern, text + c, pelem_compar_bytes)==0) {
				if(memcmp(el2->op, text + c - el2->offset, el2->length)==0 && (text[c - el2->offset - 1] & (1 << 7)) == (1 << 7)) {
#ifdef PRINT_RESULTS
					unsigned long l1 = ETDC_find_position(c - el2->offset, text, etdc_idxs, index_number, offset, &map_etdc_to_str);
					indexes.insert(c - el2->offset);
					l2[c - el2->offset] = l1;
#else
					t_start(t_pos_find);
					long ex_pos = ETDC_find_position(c - el2->offset, text, etdc_idxs, index_number, offset, &map_etdc_to_str);
					t_stop(t_pos_find);
					indexes.insert(ex_pos);
					
					//indexes.insert(c - el2->offset);
#endif
				}
				el2--;
			}
			el2 = ++ref;
			while( el2 - indexed_patterns[index1].list < indexed_patterns[index1].count && memcmp(el2->pattern, text + c, pelem_compar_bytes)==0) {
				if(memcmp(el2->op, text + c - el2->offset, el2->length)==0 && (text[c - el2->offset - 1] & (1 << 7)) == (1 << 7)) {
#ifdef PRINT_RESULTS
					unsigned long l1 = ETDC_find_position(c - el2->offset, text, etdc_idxs, index_number, offset, &map_etdc_to_str);
					indexes.insert(c - el2->offset);
					l2[c - el2->offset] = l1;
#else
					t_start(t_pos_find);
					long ex_pos = ETDC_find_position(c - el2->offset, text, etdc_idxs, index_number, offset, &map_etdc_to_str);
					t_stop(t_pos_find);
					indexes.insert(ex_pos);
					//indexes.insert(c - el2->offset);

#endif
				}
				el2++;
			}
		}
		d &= ~(( word )1 << s );
	}
}


/*
Expands to:
	d = ( d << 1 ) | b[ get_Q_gram( (tt + 0  * K * Q), sigma)];
	d = ( d << 1 ) | b[ get_Q_gram( (tt + 1  * K * Q), sigma)];
	d = ( d << 1 ) | b[ get_Q_gram( (tt + 2  * K * Q), sigma)];
	d = ( d << 1 ) | b[ get_Q_gram( (tt + 3  * K * Q), sigma)];
	... U times
*/
template <unsigned int U_i, unsigned int U, unsigned int Q, unsigned int K, unsigned int SIGMA>
struct mag_ { 
    static void get_d(word &d, uchar *tt, word *b) {
		d = ( d << 1 ) | b[ get_<Q, SIGMA>::gram( (tt + (U-U_i)  * K * Q), 1)];
		mag_<U_i-1, U, Q, K, SIGMA>::get_d(d, tt, b);
    }
};

template <unsigned int U, unsigned int Q, unsigned int K, unsigned int SIGMA>
struct mag_<0, U, Q, K, SIGMA> {
	static void get_d(word &d, uchar *tt, word *b) {
		return;
	}
};

template <unsigned int U, unsigned int K, unsigned int Q, unsigned int SIGMA> int etdc_mag() {
	word  *b = (word*)calloc(get_super_<Q, SIGMA>::sigma(), sizeof(word));
	word  d;
	word  mm;
	int  i, j, h, r, foo = U * K * Q, *vt;
	byte * tt;

	if( patt_size > (int)MAX_WORD_SIZE ) { printf("Error: patt_size > MAX_WORD_SIZE"); return EXIT_FAILURE; }

	for( i = 0; i < get_super_<Q, SIGMA>::sigma(); i++ ) b[ i ] = ~( word )0; 

	for( j = h = 0, mm = ( word )0; j < K; j++ ) {
		for( i = 0; i < patt_size/K; i++ ) {
			for( int z = 0; z < patterns_number; ++z) {
				for (int offset = 0; offset < Q; offset++) {
					b[ get_<Q, SIGMA>::gram((&patterns2[z][ i * K * Q + j * Q + offset]), 1) ] &= ~(( word )1 << ( h ));
				}
			}
			++h;
		}
		for( r = 0; r < U; r++, h++ )
			mm = mm | (( word )1 << ( h - 1 )); 
		--h;
	}

	if( h > (int)MAX_WORD_SIZE ) { printf("Error: h=%d > %d\n", h, ( int )MAX_WORD_SIZE ); exit(1); }
	for( i = 0; i < get_super_<Q, SIGMA>::sigma(); i++ ) b[ i ] &= ~( mm & ( mm << 1 ));

	vt = build_verify_table( patt_size, K, U, 1 );
	d = ~mm; i = text_size; tt = text;
	do {
		mag_<U, U, Q, K, SIGMA>::get_d(d, tt, b);

		if(( d & mm ) != mm ) etdc_mag_verification<Q, SIGMA>( d, mm, tt - text - K * Q + foo, vt );
		d &= ~mm;
		tt += foo;
	} while ( ( i -= foo ) > 0 );

	free(b);
	free(vt);

	return EXIT_SUCCESS;
}

template <unsigned int Q, unsigned int SIGMA> void etdc_mag_build_indexed_patterns() {
	byte * pattern = 0;
	long l = 0;
	byte bytes_to_read = 0;
	while ( l < pattern_text_size ) {
		bytes_to_read = *(patterns_text + l);
		pattern_size = (bytes_to_read < pattern_size && bytes_to_read != 0) ? bytes_to_read : pattern_size;
		++l;
		pattern = patterns_text + l;
		l += bytes_to_read;
		memcpy(patterns2[patterns_number], pattern, bytes_to_read);
		for(int i =0; i < Q; i++) {
			long index = get_<Q, SIGMA>::gram((patterns2[patterns_number] + i), 1);
			indexed_patterns[index].list = (pelem*)realloc(indexed_patterns[index].list, sizeof(pelem) * (indexed_patterns[index].count+1));
			indexed_patterns[index].list[indexed_patterns[index].count].pattern = patterns2[patterns_number] + i ;
			indexed_patterns[index].list[indexed_patterns[index].count].op = patterns2[patterns_number];
			indexed_patterns[index].list[indexed_patterns[index].count].offset = i ;
			indexed_patterns[index].list[indexed_patterns[index].count].length = bytes_to_read;
			indexed_patterns[index].count++;
		}
		++patterns_number;
	}
	pelem_compar_bytes = pattern_size - Q;
	for(int i = 0; i < get_super_<Q, SIGMA>::sigma(); ++i) {
		if(indexed_patterns[i].count > 0) {
			qsort(indexed_patterns[i].list, indexed_patterns[i].count, sizeof(pelem), (int(*)(const void*,const void*)) pelem_compar);
		}
	}
}


#endif