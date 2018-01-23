#include "etdc_tool.h"
#include <unordered_set>

struct t_pattern {
	int bytes;
	byte pattern[220];
} ;

using namespace ETDC;

int pattern_size = 0;
unsigned long text_size = 0;

// MAIN
int main(int argc, char *argv[]) {

	byte * encoded_text;
	t_pattern patterns[4000];
	byte pattern[220];
	int patterns_number = 0;
	char *tmp_str = NULL;

	if ( argc < 4 ) return EXIT_FAILURE;

	const char *patterns_filename = argv[1], *pattern_size_pch = argv[2], *text_filename = argv[3], *orginal_text_filename = argv[4];

	char *orginal_text = NULL;
	long orginal_text_size = 0;
	if ( argc > 4 ) {
		orginal_text_filename = argv[4];
		orginal_text_size = read_file_content<char>(&orginal_text, orginal_text_filename);
	}

	char dict_filename[250];
	strcpy(dict_filename, orginal_text_filename);
	strcat(dict_filename, ".dict");
	char *dict = NULL;
	printf("Dictionary file reading (%s)\n", dict_filename);
	long dict_size = read_file_content<char>(&dict, dict_filename);
	if(dict==NULL) {printf("Error: dict==NULL"); return EXIT_FAILURE;}

	printf("Preparing dictionary\n");
	std::unordered_map<int, std::string> map_etdc_to_str;
	ETDC_create_map_etdc_to_str(dict, &map_etdc_to_str);

	pattern_size = atoi(pattern_size_pch); encoded_text = NULL; FILE * file = NULL;
	pattern_size = 1000;

	// Preprocessing (superalph creation, text encoding)

	text_size = read_file_content<byte>(&encoded_text, text_filename);
	if (encoded_text == NULL) { printf("Error: text==NULL"); return EXIT_FAILURE;}
	
	file = fopen (patterns_filename, "rb");
	if (!file) { free(encoded_text); return EXIT_FAILURE; }

	byte bytes_to_read = 0;
	if(fread (&bytes_to_read, BYTE_SIZE, 1, file)!=BYTE_SIZE) {
		printf("Error: Can't read patterns.");
		return EXIT_FAILURE;
	}

	// reading all patterns
	do {
		if(fread (pattern, sizeof(byte), bytes_to_read, file)!=bytes_to_read) {
			printf("Error: Can't read pattern.");
			return EXIT_FAILURE;
		}
		
		patterns[patterns_number].bytes = bytes_to_read;
		memcpy(patterns[patterns_number].pattern, pattern, bytes_to_read);

		for(int i = 0; i < bytes_to_read; ) {
			int idx = -1;
			int size = ETDC_decode(patterns[patterns_number].pattern + i, &idx);
			std::string str = map_etdc_to_str[idx];
			printf("%s ", str.c_str());
			i+=size;
		}
		printf("\n");
		
		patterns_number++;
		if( bytes_to_read < pattern_size ) pattern_size = bytes_to_read;
	} while (fread (&bytes_to_read, sizeof(byte), 1, file)==BYTE_SIZE);

	//indexes = (bool*)calloc(text_size, BOOL_SIZE);
	std::unordered_set<long> word_positions;

	char index_filename[250] = {0};
	int offset = text_size / 1000;
	sprintf(index_filename, "%s.%d.idx", text_filename, offset);

	uint32_t *etdc_idxs = NULL;
	int index_number = ETDC_read_index_file(index_filename, &etdc_idxs);

	std::vector<long> results;

	for(unsigned int i = 0; i < text_size; i++) {
		for(int j = 0; j < patterns_number; j++) {
			int result = memcmp(encoded_text+i, patterns[j].pattern, patterns[j].bytes);
			if(result == 0) {
				//if ( encoded_text[i-1] & (1 << 7) == (1 << 7) ) {
					long text_position = ETDC_find_position(i, encoded_text, etdc_idxs, index_number, offset, &map_etdc_to_str);
					results.push_back(text_position);
					counter++;
				//}
			}
		}
	}

	// Print results
	printf("\n\nResults:\n");
	std::sort( results.begin(), results.end() );
	results.erase( std::unique( results.begin(), results.end() ), results.end() );
	for (int i = 0; i < results.size(); i++) {
		printf("%d\t%.*s\n", results[i], 50, orginal_text+results[i]);
	}
	printf("\n\nFound %d matches\n", counter);


	fclose(file);

	
	return EXIT_SUCCESS;
}
