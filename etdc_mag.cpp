#include "etdc_mag.h"
#include "etdc_tool.h"
#include <set>
#define SEARCH_FUNCTION_NAME etdc_mag
#define BUILD_INDEXED_PATTERNS_FUNCTION etdc_mag_build_indexed_patterns
#define MAP_CREATEION_FUNCTION CreateMapByHistogramBinPack
#include "etdc_wrappers.h"

using namespace ETDC;

/* MAIN */
int main(int argc, char *argv[]) {
	if ( argc < 4 ) return EXIT_FAILURE;
	t_timemes t_pre = {0}, t_run = {0};
	t_init(t_pos_find); t_init(t_pre); t_init(t_run);
	t_start(t_pre);

	l2 = new unsigned long[50000000];

	/* Reading data from HD */
	const char *patterns_filename = argv[1], *enc_text_filename = argv[3];
	const unsigned int U = atoi(argv[4]);
	const int k = atoi(argv[5]);	/* q */
	const int q_size = atoi(argv[6]);
	long sigma = atoi(argv[7]);
	int denominator = atoi(argv[8]);
	char *orig_filename = argv[9];
	int ex_offset = argc>10 ? atoi(argv[10]) : 0;
	if(denominator!=0 && ex_offset!=0) { printf("Error: There should be set only one: denominator or offset"); exit(EXIT_FAILURE); }

	char processed_filename[255] = {0};
	sprintf(processed_filename, "%s.processed", orig_filename);

	long processed_file_size = file_size(processed_filename);

	text = NULL; FILE * file = NULL;

	//int max_m = ( MAX_WORD_SIZE / k + 1 - U ) * k - 2;

	int mod = 0, div = 0;
	t_stop(t_pre);

	// check dictionary size
	char dict_filename[250] = {0};
	char *dict = NULL;
	sprintf(dict_filename, "%s.processed.dict", orig_filename);
	long dict_file_size = read_file_content<char>(&dict, dict_filename);
	if(dict==NULL) {printf("Error: dict==NULL (filename=%s)", dict_filename); return EXIT_FAILURE;}

	/* read text from disk */
	text_size = read_file_content<byte>(&text, enc_text_filename);
	if (text == NULL) { printf("Error: text==NULL\n"); return EXIT_FAILURE;}
	
	if(denominator!=0) offset = (double)text_size / (double)denominator; else offset = ex_offset;

	char index_filename[250] = {0};
	sprintf(index_filename, "%s.%ld.idx", enc_text_filename, offset);

	index_number = ETDC_read_index_file(index_filename, &etdc_idxs);
	
	//map_etdc_to_str.max_load_factor(0.02);

	ETDC_create_map_etdc_to_str(dict, &map_etdc_to_str);
	/*
    unsigned long sizee = sizeof(map_etdc_to_str);
    for(std::unordered_map<int,std::string>::const_iterator it = map_etdc_to_str.begin(); it != map_etdc_to_str.end(); ++it){
        sizee += sizeof(int);
        sizee += it->second.size();
    }

    unsigned long cap = sizeof(map);
    for(std::unordered_map<int,std::string>::const_iterator it = map_etdc_to_str.begin(); it != map_etdc_to_str.end(); ++it){
        cap += sizeof(int);
        cap += it->second.capacity();
    }
	
	printf("Real map size = %d\n", sizee);
	printf("Capacity of map size = %d\n", cap);
	printf("Calculated map size = %d\n", map_etdc_to_str.size() * sizeof(int) + dict_file_size);
	printf("Load factor = %f\n", map_etdc_to_str.max_load_factor());
	return 0;
	*/

	/* read patterns file */
	pattern_text_size = read_file_content<byte>(&patterns_text, patterns_filename);

	t_start(t_pre);

	sigma = CreateMap_wrapper<byte>(patterns_text, pattern_text_size, sigma);
	const int super_sigma = 
		q_size==1 ? sigma : 
		q_size==2 ? sigma * sigma : 
		q_size==3 ? sigma * sigma * sigma : 
		q_size==4 ? sigma * sigma * sigma * sigma : 
		q_size==5 ? sigma * sigma * sigma * sigma * sigma : 
		q_size==6 ? sigma * sigma * sigma * sigma * sigma * sigma : 
		q_size==7 ? sigma * sigma * sigma * sigma * sigma * sigma * sigma : 
		q_size==8 ? sigma * sigma * sigma * sigma * sigma * sigma * sigma * sigma :
		q_size==9 ? sigma * sigma * sigma * sigma * sigma * sigma * sigma * sigma * sigma : 
		q_size==10 ? sigma * sigma * sigma * sigma * sigma * sigma * sigma * sigma * sigma * sigma : 0;

	if( super_sigma > 200000000 || super_sigma == 0) { printf("Error: Q is too big for choosen sigma size { q=%d, super_sigma=%d }\n", q_size, super_sigma); exit(EXIT_FAILURE); }

	indexed_patterns = (plist*)calloc(super_sigma, sizeof(plist));
	for(int i = 0; i < super_sigma; ++i) {
		indexed_patterns[i].list = (pelem*)calloc(1, sizeof(pelem));
	}

	pattern_size = 999;

	build_indexed_patterns_wrapper(sigma, q_size);

	mod = pattern_size % q_size;
	div = pattern_size / q_size;
	patt_size = div - ( mod < (q_size - 1) ? 1 : 0 );

	int max_m = ( MAX_WORD_SIZE / k + 1 - U ) * k - 2;

	if(max_m < (int)patt_size) { 
		//printf("Error: max_m < (int)patt_size\n"); return EXIT_FAILURE;
		// mod = max_m % q_size;
		// div = max_m / q_size;
		// patt_size = div - ( mod < (q_size - 1) ? 1 : 0 );
		patt_size = max_m;
	}

	if(patt_size <= k) { printf("Error: (m/2 and max_m)>=k, m=%d, max_m=%d, k=%d\n", patt_size, max_m, k); return EXIT_FAILURE; }

	for(unsigned int l = 0; l < log2cache; ++l) log2v[l] = ilog2((ldouble)l);

	t_stop(t_pre);

	t_start(t_run);
	search_wrapper(sigma, U, k, q_size);
	t_stop(t_run);
	long int matches = indexes.size();
#ifdef PRINT_RESULTS	
	std::set<unsigned long> idx_ord(indexes.begin(), indexes.end());
	std::set<unsigned long>::iterator l = idx_ord.begin();
	while( l != idx_ord.end()) {
		printf("%d\t%d\n", *l, l2[*l]);
		fflush(stdout);
		++l;
	}
	print_result(t_get_seconds(t_data_acc), t_get_seconds(t_pre), t_get_seconds(t_run), v_count, verif, matches, sigma, super_sigma, text_size, processed_file_size, dict_file_size, index_number * sizeof(uint32_t), denominator, offset, pattern_size, map_etdc_to_str.size());
#else
	print_result(t_get_seconds(t_pos_find), t_get_seconds(t_pre), t_get_seconds(t_run), v_count, verif, matches, sigma, super_sigma, text_size, processed_file_size, dict_file_size, index_number * sizeof(uint32_t), denominator, offset, pattern_size, map_etdc_to_str.size());
#endif
	for(int i = 0; i < super_sigma; ++i) {
		free(indexed_patterns[i].list);
	}
	free(indexed_patterns);
	free(patterns_text);
	free(text);
	return EXIT_SUCCESS;
}

