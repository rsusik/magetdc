#ifndef ETDC_TOOL_H
#define ETDC_TOOL_H

#include "common.h"
#include <string>
#include <map>
#include <unordered_map>
#include <vector>

namespace ETDC {

#define ETDC_SEPARATORS " \r\n\t"

typedef struct {
	char * token;
	size_t occurences;
} s_token;

typedef struct {
	byte *bytes;
	int length; // number of bytes
} ETDC_code;

int token_compar (const s_token * a, const s_token * b) {
	if ( a->occurences <  b->occurences ) return 1;
	if ( a->occurences == b->occurences ) return 0;
	return -1;
}

int token_compar2 (const s_token * a, const s_token * b) {
	return strcmp(a->token, b->token);
}

bool file_exists(const char * filename) {
    if (FILE * file = fopen(filename, "rb")) {
        fclose(file);
        return true;
    }
    return false;
}

long file_size(const char * filename) {
	if (FILE * file = fopen(filename, "rb")) {
		fseek(file, 0, SEEK_END);
		long result = ftell(file);
		fclose(file);
		return result;
	}
	return -1;
}

uint32_t myRand() {
	uint32_t r = rand()<<16;
	r |= rand();
	return r;
}


/* Major Functions */

/*
	Creates dictionary of file sorted by frequency
*/
int ETDC_create_dictionary(char *set_filename, char *dict_filename) {
	char *text = NULL;
	printf("Text file reading (%s)\n", set_filename);
	long text_size = read_file_content<char>(&text, set_filename);
	if(text_size < 0) { printf("Error: File (%s) does not exists or you don't have permissions.\n", set_filename); return EXIT_FAILURE; }
	char *pch = strtok (text, ETDC_SEPARATORS);
	long count = 0;

	printf("Memory allocation\n");
	
	std::map<std::string, int> tokens;	// use hash instead of string to improve performance
	std::string str = "";
	printf("Histogram creation\n");
	while (pch != NULL) {
		str = pch;
		if(count++ % 100000 == 0) printf("+");
		if (tokens.find(str) != tokens.end()) {
			tokens[str]++;
		} else {
			tokens.insert(std::pair<std::string,int>(str,1));
		}
		pch = strtok (NULL, ETDC_SEPARATORS);
	}

	s_token *toks = (s_token*)malloc(999999*sizeof(s_token));

	std::map<std::string, int>::iterator it;
	size_t idx = 0;
	for(it = tokens.begin(); it != tokens.end(); it++, idx++) {
		toks[idx].token = (char*)it->first.c_str();
		toks[idx].occurences = it->second;
	}

	printf("\n");
	printf("Sorting\n");
	std::qsort(toks, idx, sizeof(s_token), (int(*)(const void*, const void*))token_compar);
	printf("Saving dictionary to file (%s)\n", dict_filename);
	FILE *f = fopen(dict_filename, "w");
	if(f==NULL) { printf("You don't have permission to file (%s) or disk is full", dict_filename); exit(EXIT_FAILURE); }
	for(unsigned long int i = 0; i < idx; ++i)	{
		fprintf(f, "%s\n", toks[i].token);
	}
	fclose(f);
	printf("Done.\n");
	free(text);
	free(toks);
	return EXIT_SUCCESS;
}

int ETDC_decode(byte *bytes, int *decoded) {
	if(bytes[0] & 1<<7) {
		*decoded = bytes[0] ^ 1<<7;
		return 1;
	} else if(bytes[1] & 1<<7) {
		*decoded = ((bytes[1] ^ (1<<7))<<7)+bytes[0];
		return 2;
	} else if(bytes[2] & 1<<7) {
		*decoded = ((bytes[2] ^ (1<<7))<<14) + (bytes[1]<<7) + bytes[0];
		return 3;
	} else {
		printf("Not supported code (first 4 bytes -> %d | %d | %d | %d)\n", bytes[0], bytes[1], bytes[2], bytes[3]); 
		printf("bytes pos = %p\n", bytes);
		exit(EXIT_FAILURE);
	}
}

ETDC_code ETDC_encode(int idx) {
	ETDC_code code;
	if (idx <= 127) {
		code.length = 1;
		byte *b = (byte*)malloc(1*sizeof(byte));
		b[0] = (idx & 127) | 1 << 7;
		code.bytes = b;
	} else if (idx > 127 && idx <= 16383 ) {
		code.length = 2;
		byte *b = (byte*)malloc(2*sizeof(byte));
		b[0] =   (idx & 127)        | 0 << 7;
		b[1] = ( (idx >> 7 ) & 127) | 1 << 7;
		code.bytes = b;
	} else {
		code.length = 3;
		byte *b = (byte*)malloc(3*sizeof(byte));
		b[0] =   (idx & 127)        | 0 << 7;
		b[1] = ( (idx >> 7 ) & 127) | 0 << 7;
		b[2] = ( (idx >> 14) & 127) | 1 << 7;
		code.bytes = b;
	}
	return code;
}

/*
Creates map from dictionary in form of...
to
the
of
...

map[to] = 0
map[the] = 1
map[of] = 2
...

returns number of elements
*/
size_t ETDC_create_map_str_to_etdc(char *dict, std::unordered_map<std::string, ETDC_code> *dictionary) {
	if(dict==NULL) { printf("Error: ETDC_create_map_str_to_etdc: dict is NULL \n"); exit(EXIT_FAILURE); }
	std::string str = "";
	char *pch;
	size_t idx = 0;
	pch = strtok (dict, ETDC_SEPARATORS);
	if(pch==NULL) { printf("Error: There is no tokens inside the dictionary file\n"); exit(EXIT_FAILURE); }
	do {
		str = pch;
		dictionary->insert(std::pair<std::string,ETDC_code>(str,ETDC_encode(idx++)));
	} while ( (pch = strtok (NULL, ETDC_SEPARATORS)) != NULL );
	return idx;
}

size_t ETDC_create_map_etdc_to_str(char *dict, std::unordered_map<int, std::string> *dictionary) {
	std::string str = "";
	char *pch;
	size_t idx = 0;
	pch = strtok (dict, ETDC_SEPARATORS);
	do {
		str = pch;
		dictionary->insert(std::pair<int, std::string>(idx++, str));
	} while ( (pch = strtok (NULL, ETDC_SEPARATORS)) != NULL );
	return idx;
}

int ETDC_create_etdc_file(char *text_filename, char *dict_filename, char *encoded_text_filename) {
	char *text = NULL;
	printf("Text file reading (%s)\n", text_filename);
	long text_size = read_file_content<char>(&text, text_filename);

	char *dict = NULL;
	printf("Dictionary file reading (%s)\n", dict_filename);
	long dict_size = read_file_content<char>(&dict, dict_filename);

	printf("Preparing dictionary\n");
	std::unordered_map<std::string, ETDC_code> dictionary;
	ETDC_create_map_str_to_etdc(dict, &dictionary);

	printf("Encoding text to file (%s)\n", encoded_text_filename);
	FILE *f = fopen(encoded_text_filename, "wb");
	char *pch = strtok (text, ETDC_SEPARATORS);
	size_t count = 0;
	std::string str;
	do {
		if(count++ % 100000 == 0) printf("+");
		str = pch;
		if (dictionary.find(str) != dictionary.end()) {
			fwrite(dictionary[str].bytes, sizeof(byte), dictionary[str].length, f);
		} else {
			printf("Error: Something went wrong (this token doesn't exists in dictionary)\n");
			return EXIT_FAILURE;
		}
	} while ( (pch = strtok (NULL, ETDC_SEPARATORS)) != NULL);
	fclose(f);
	printf("\nDone.\n");
	return EXIT_SUCCESS;
}

// below function should be embeded into ETDC_encode_file function
int ETDC_create_index_file(const char *encoded_text_filename, const char *index_filename, std::unordered_map<int, std::string> *map_etdc_to_str, int offset) {
	printf("Index file creation\n");
	printf("Creating %s index file\n", index_filename);
	FILE *f_in  = fopen(encoded_text_filename, "rb");
	FILE *f_out = fopen(index_filename, "wb");

	int code = 0;
	int size = 0;
	uint32_t length = 0;
	uint32_t byte_num = 0;
	byte bytes[3] = {0};

	fwrite(&length, sizeof(uint32_t), 1, f_out);
	while(fread( &(bytes[size]) , sizeof(byte), 1, f_in) == sizeof(byte)) {
		if( ( bytes[size] & (1<<7) ) != 0 ) {
			ETDC_decode(bytes, &code);
			length += (*map_etdc_to_str)[code].size() + 1;	// +1 because of separator
			bytes[0] = 0; bytes[1] = 0; bytes[2] = 0;
			size = 0;
		} else {
			size++;
		}

		if(++byte_num % offset == 0) {
			fwrite(&length, sizeof(uint32_t), 1, f_out);
		}
	}

	printf("%d chars are in the decoded text\n", length);
	fclose(f_in);
	fclose(f_out);

	return EXIT_SUCCESS;
}

// index for word position finding
long ETDC_read_index_file(const char *index_filename, uint32_t **dst) {

	long to_read = file_size(index_filename);
	(*dst) = (uint32_t*)malloc(to_read);

	FILE *f = fopen(index_filename, "rb");
	fread((*dst), sizeof(byte), to_read, f);
	fclose(f);
	long count = to_read / sizeof(uint32_t);
	return count;
}

/// position - position in encoded text
inline long ETDC_find_position(long position, byte *encoded_text, uint32_t *index, long index_count, long offset, std::unordered_map<int, std::string> *map_etdc_to_str) {
	int code;
	long idx_pos = position / offset;
	long pos = index[idx_pos];	// position in decoded text
	long start = idx_pos * offset;
	long i = start - 1;
	long stop = position;
	
	// If there is exact position in index then return it
	if( ( (position % offset) == 0 ) && ( ( encoded_text[position - 1] & (1<<7) ) == (1<<7) ) ) { return index[idx_pos] + 1; }

	// If pos is in the middle of ETDC go back and add length of previous word
	if(start!=0) while( (encoded_text[i] & (1<<7)) != (1<<7) ) { i--; } i++;
	start = i + ETDC_decode(encoded_text + i, &code);
	pos += (*map_etdc_to_str)[code].size() + 1;

	// Then count lenghts of all words from indexed position to current byte
	for(long i = start; i < stop;) {
		i+= ETDC_decode(encoded_text+i, &code);
		pos += (*map_etdc_to_str)[code].size() + 1;	// +1 because of separator
	}

	return pos + 1;
}

void ETDC_create_decoded_file(char *decoded_text_filename, byte *encoded_text, long encoded_text_length, std::unordered_map<int, std::string> *map_etdc_to_str) {
	int code;
	FILE *f_out = fopen(decoded_text_filename, "wt");
	for(long i = 0; i < encoded_text_length;) {
		i+= ETDC_decode(encoded_text+i, &code);
		fwrite((*map_etdc_to_str)[code].c_str(), sizeof(char), (*map_etdc_to_str)[code].size(), f_out);
		fwrite(" ", sizeof(char), 1, f_out);
	}
	fclose(f_out);
}

int ETDC_create_pattern_file(char *processed_text_filename, char *dict_filename, char *patterns_filename, unsigned int p_length, int p_number, char *patterns_filename_txt) {
	std::string str = "";
	size_t idx;

	char *text = NULL;
	printf("Text file reading (%s)\n", processed_text_filename);
	long text_size = read_file_content<char>(&text, processed_text_filename);

	char *dict = NULL;
	printf("Dictionary file reading (%s)\n", dict_filename);
	long dict_size = read_file_content<char>(&dict, dict_filename);

	printf("Reading all tokens from text\n");
	char *pch;
	char **tokens = (char**)malloc(sizeof(char*)*50000000);
	pch = strtok (text, ETDC_SEPARATORS);
	size_t count = 0; // number of all tokens in file
	do {
		if(count % 100000 == 0) printf("+");
		tokens[count++] = pch;
	} while ( (pch = strtok (NULL, ETDC_SEPARATORS)) != NULL );
	--count;
	printf("\n");

	// read dictionary
	printf("Dictionary map creation\n");
	std::unordered_map<std::string, ETDC_code> dictionary;
	ETDC_create_map_str_to_etdc(dict, &dictionary);

	printf("Generating patterns to file (%s)\n", patterns_filename);
	FILE *f = fopen(patterns_filename, "wb");
	FILE *f2 = fopen(patterns_filename_txt, "wt");

	char patterns_words_filename_txt[250];
	sprintf(patterns_words_filename_txt, "%s.words.txt", patterns_filename_txt);
	FILE *f3 = fopen(patterns_words_filename_txt, "wt");

	srand (time(NULL));
	int step = ceil((double)p_number/(double)80);
	byte bytes[10000];
	printf("count = %zu\n", count);
	for(int i = 0; i < p_number; i++) {
		idx = myRand() % (count + 1 - p_length);
		memset(bytes, 0, 500);
		byte *b_tmp = bytes + 1; // left one byte for number of bytes
		for(unsigned int j = idx; j < idx + p_length; j++) {
			str = tokens[j];
			fprintf(f3, "%s ", str.c_str());
			if (dictionary.find(str) != dictionary.end()) {
				bytes[0] += dictionary[str].length;
				memcpy(b_tmp, dictionary[str].bytes, dictionary[str].length);
				b_tmp = bytes + bytes[0] + 1;
			} else {
				printf("Error: Something went wrong (this token doesn't exists in dictionary)\n");
				return EXIT_FAILURE;
			}
			
		}
		fprintf(f3, "\n");
		fwrite(bytes, sizeof(byte), bytes[0] + 1, f); // +1 because of the first byte
		for(int a = 0; a < bytes[0] + 1; a++) {
			fprintf(f2, "%d|", bytes[a]);
		}
	}
	printf("\n");

	fclose(f);
	fclose(f2);
	fclose(f3);
	free(text);
	free(dict);
	free(tokens);
	return EXIT_SUCCESS;
}

}

#endif
