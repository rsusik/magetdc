#include "etdc_tool.h"

#define PATT_NUMBER 11
int patt_lenghts[PATT_NUMBER] = { 2, 3, 4, 6, 8, 10, 16, 24, 32, 48, 64 };

using namespace ETDC;

int main(int argc, char *argv[]) {
	srand( time( NULL ) );
	if(argc<3) { printf("Syntax: etdc_tool.exe  path/to/text/set  pnumber\npnumber - determines how many patterns have to be generated.\n"); return EXIT_FAILURE; }
	char *text_filename = argv[1];
	if(!file_exists(text_filename)) { printf("Error: Given file (%s) doesn't exists\n", text_filename); return EXIT_FAILURE; }
	char dict_filename[250] = {0};
	char encoded_text_filename_bin[250] = {0};
	char patterns_filename_bin[250] = {0};
	char patterns_filename_txt[250] = {0};
	char index_filename[250] = {0};
	char processed_text_filename[250] = {0};
	char decoded_text_filename[250] = {0};

	char *dictionary_file_content = NULL;
	byte *encoded_file_content = NULL;

	long encoded_file_content_size = 0;

	sprintf(processed_text_filename, "%s.processed", text_filename);
	sprintf(dict_filename, "%s.processed.dict", text_filename);
	sprintf(encoded_text_filename_bin, "%s.processed.etdc.bin", text_filename);
	
	ETDC_create_dictionary(processed_text_filename, dict_filename);
	ETDC_create_etdc_file(processed_text_filename, dict_filename, encoded_text_filename_bin);

	encoded_file_content_size = read_file_content<byte>(&encoded_file_content, encoded_text_filename_bin);
	read_file_content<char>(&dictionary_file_content, dict_filename);
	if(dictionary_file_content==NULL) { printf("Error: dictionary_file_content is NULL. Check if file exists (%s).\n", dict_filename); exit(EXIT_FAILURE); }
	std::unordered_map<int, std::string> map_etdc_to_str;
	ETDC_create_map_etdc_to_str(dictionary_file_content, &map_etdc_to_str);

	long encoded_filesize = file_size(encoded_text_filename_bin);
	
	// with denominator
#define OFFSET_NUMBER 6+11
int offsets[OFFSET_NUMBER] =	{	
								encoded_filesize / 10, encoded_filesize / 100, encoded_filesize / 1000, 
								encoded_filesize / 10000, encoded_filesize / 100000, encoded_filesize / 1000000,  
								1000, 2000, 4000, 8000, 16000, 32000, 64000, 128000, 256000, 512000, 1000000
								};
	
	for(int i = 0; i < OFFSET_NUMBER; i++) {
		if (offsets[i] <= 0) {
			printf("Error: offset is too small, skipping... (offset = %d)\n", offsets[i]);
			continue;
		}
		sprintf(index_filename, "%s.%d.idx", encoded_text_filename_bin, offsets[i]);
		ETDC_create_index_file(encoded_text_filename_bin, index_filename, &map_etdc_to_str, offsets[i]);
		
		uint32_t *indexes = NULL;
		int index_count = ETDC_read_index_file(index_filename, &indexes);

		sprintf(decoded_text_filename, "%s.processed.%d.decoded", text_filename, offsets[i]);
		ETDC_create_decoded_file(decoded_text_filename, encoded_file_content, encoded_file_content_size, &map_etdc_to_str);

		free(indexes);
	}
	
	unsigned int p_number = atoi(argv[2]);
	char str[4];
	for(int i = 0; i < PATT_NUMBER; i++) {
		sprintf(patterns_filename_txt, "%s.processed.%d.%d.patt.txt", text_filename, p_number, patt_lenghts[i]);
		sprintf(patterns_filename_bin, "%s.processed.%d.%d.patt.bin", text_filename, p_number, patt_lenghts[i]);
		if (ETDC_create_pattern_file(processed_text_filename, dict_filename, patterns_filename_bin, patt_lenghts[i], p_number, patterns_filename_txt) == EXIT_FAILURE) {
			printf("Critical error\n");
			return EXIT_FAILURE;
		}
	}
	
	return EXIT_SUCCESS;
}

