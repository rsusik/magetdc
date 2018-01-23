#ifndef WRAPPERS_H
#define WRAPPERS_H

#include "common.h"

/* 
// Define these constants in cpp file:

#define SEARCH_FUNCTION_NAME mag
#define BUILD_INDEXED_PATTERNS_FUNCTION mag_build_indexed_patterns
*/

/* Function Declarations */
void build_indexed_patterns_wrapper(const unsigned int);
void search_wrapper(const unsigned int, const unsigned int, const unsigned int);
/* EncodeText is defined in smag.h */
template<class T, unsigned int Q, unsigned int U, unsigned int K, unsigned int SIGMA> void EncodeText(T * );
template<class T> void EncodeText_wrapper(T *, const int, unsigned int, unsigned int, unsigned int);

/* Definitions */

size_t get_super_sigma(const unsigned int q_size) {
	if( q_size == 1 ) {
		return get_1_gram::super_sigma;
	} else if( q_size == 2 ) {
		return get_2_gram::super_sigma;
	} else if( q_size == 3 ) {
		return get_3_gram::super_sigma;
	} else if( q_size == 4 ) {
		return get_4_gram::super_sigma;
	} else if( q_size == 5 ) {
		return get_5_gram::super_sigma;
	} else if( q_size == 6 ) {
		return get_6_gram::super_sigma;
	} else if( q_size == 7 ) {
		return get_7_gram::super_sigma;
	} else if( q_size == 8 ) {
		return get_8_gram::super_sigma;
	} else if( q_size == 9 ) {
		return get_9_gram::super_sigma;
	} else if( q_size == 10 ) {
		return get_10_gram::super_sigma;
	} else {
		printf("Error: Not supported parameters\n"); exit(1); 
	}
}

void build_indexed_patterns_wrapper(const unsigned int q_size) {
	if( q_size == 1 ) {
		BUILD_INDEXED_PATTERNS_FUNCTION<get_1_gram>();
	} else if( q_size == 2 ) {
		BUILD_INDEXED_PATTERNS_FUNCTION<get_2_gram>();
	} else if( q_size == 3 ) {
		BUILD_INDEXED_PATTERNS_FUNCTION<get_3_gram>();
	} else if( q_size == 4 ) {
		BUILD_INDEXED_PATTERNS_FUNCTION<get_4_gram>();
	} else if( q_size == 5 ) {
		BUILD_INDEXED_PATTERNS_FUNCTION<get_5_gram>();
	} else if( q_size == 6 ) {
		BUILD_INDEXED_PATTERNS_FUNCTION<get_6_gram>();
	} else if( q_size == 7 ) {
		BUILD_INDEXED_PATTERNS_FUNCTION<get_7_gram>();
	} else if( q_size == 8 ) {
		BUILD_INDEXED_PATTERNS_FUNCTION<get_8_gram>();
	} else if( q_size == 9 ) {
		BUILD_INDEXED_PATTERNS_FUNCTION<get_9_gram>();
	} else if( q_size == 10 ) {
		BUILD_INDEXED_PATTERNS_FUNCTION<get_10_gram>();
	} else {
		printf("Error: Not supported parameters\n"); exit(1); 
	}
}

void search_wrapper(const unsigned int U, const unsigned int k, const unsigned int q_size) {
	// Generated code
	if( k == 1 && U == 4 && q_size == 1 ) {
		SEARCH_FUNCTION_NAME<get_1_gram, 4, 1>();
	} else if( k == 2 && U == 4 && q_size == 1 ) {
		SEARCH_FUNCTION_NAME<get_1_gram, 4, 2>();
	} else if( k == 4 && U == 4 && q_size == 1 ) {
		SEARCH_FUNCTION_NAME<get_1_gram, 4, 4>();
	} else if( k == 1 && U == 8 && q_size == 1 ) {
		SEARCH_FUNCTION_NAME<get_1_gram, 8, 1>();
	} else if( k == 2 && U == 8 && q_size == 1 ) {
		SEARCH_FUNCTION_NAME<get_1_gram, 8, 2>();
	} else if( k == 4 && U == 8 && q_size == 1 ) {
		SEARCH_FUNCTION_NAME<get_1_gram, 8, 4>();
	} else if( k == 1 && U == 4 && q_size == 2 ) {
		SEARCH_FUNCTION_NAME<get_2_gram, 4, 1>();
	} else if( k == 2 && U == 4 && q_size == 2 ) {
		SEARCH_FUNCTION_NAME<get_2_gram, 4, 2>();
	} else if( k == 4 && U == 4 && q_size == 2 ) {
		SEARCH_FUNCTION_NAME<get_2_gram, 4, 4>();
	} else if( k == 1 && U == 8 && q_size == 2 ) {
		SEARCH_FUNCTION_NAME<get_2_gram, 8, 1>();
	} else if( k == 2 && U == 8 && q_size == 2 ) {
		SEARCH_FUNCTION_NAME<get_2_gram, 8, 2>();
	} else if( k == 4 && U == 8 && q_size == 2 ) {
		SEARCH_FUNCTION_NAME<get_2_gram, 8, 4>();
	} else if( k == 1 && U == 4 && q_size == 3 ) {
		SEARCH_FUNCTION_NAME<get_3_gram, 4, 1>();
	} else if( k == 2 && U == 4 && q_size == 3 ) {
		SEARCH_FUNCTION_NAME<get_3_gram, 4, 2>();
	} else if( k == 4 && U == 4 && q_size == 3 ) {
		SEARCH_FUNCTION_NAME<get_3_gram, 4, 4>();
	} else if( k == 1 && U == 8 && q_size == 3 ) {
		SEARCH_FUNCTION_NAME<get_3_gram, 8, 1>();
	} else if( k == 2 && U == 8 && q_size == 3 ) {
		SEARCH_FUNCTION_NAME<get_3_gram, 8, 2>();
	} else if( k == 4 && U == 8 && q_size == 3 ) {
		SEARCH_FUNCTION_NAME<get_3_gram, 8, 4>();
	} else if( k == 1 && U == 4 && q_size == 4 ) {
		SEARCH_FUNCTION_NAME<get_4_gram, 4, 1>();
	} else if( k == 2 && U == 4 && q_size == 4 ) {
		SEARCH_FUNCTION_NAME<get_4_gram, 4, 2>();
	} else if( k == 4 && U == 4 && q_size == 4 ) {
		SEARCH_FUNCTION_NAME<get_4_gram, 4, 4>();
	} else if( k == 1 && U == 8 && q_size == 4 ) {
		SEARCH_FUNCTION_NAME<get_4_gram, 8, 1>();
	} else if( k == 2 && U == 8 && q_size == 4 ) {
		SEARCH_FUNCTION_NAME<get_4_gram, 8, 2>();
	} else if( k == 4 && U == 8 && q_size == 4 ) {
		SEARCH_FUNCTION_NAME<get_4_gram, 8, 4>();
	} else if( k == 1 && U == 4 && q_size == 5 ) {
		SEARCH_FUNCTION_NAME<get_5_gram, 4, 1>();
	} else if( k == 2 && U == 4 && q_size == 5 ) {
		SEARCH_FUNCTION_NAME<get_5_gram, 4, 2>();
	} else if( k == 4 && U == 4 && q_size == 5 ) {
		SEARCH_FUNCTION_NAME<get_5_gram, 4, 4>();
	} else if( k == 1 && U == 8 && q_size == 5 ) {
		SEARCH_FUNCTION_NAME<get_5_gram, 8, 1>();
	} else if( k == 2 && U == 8 && q_size == 5 ) {
		SEARCH_FUNCTION_NAME<get_5_gram, 8, 2>();
	} else if( k == 4 && U == 8 && q_size == 5 ) {
		SEARCH_FUNCTION_NAME<get_5_gram, 8, 4>();
	} else if( k == 1 && U == 4 && q_size == 6 ) {
		SEARCH_FUNCTION_NAME<get_6_gram, 4, 1>();
	} else if( k == 2 && U == 4 && q_size == 6 ) {
		SEARCH_FUNCTION_NAME<get_6_gram, 4, 2>();
	} else if( k == 4 && U == 4 && q_size == 6 ) {
		SEARCH_FUNCTION_NAME<get_6_gram, 4, 4>();
	} else if( k == 1 && U == 8 && q_size == 6 ) {
		SEARCH_FUNCTION_NAME<get_6_gram, 8, 1>();
	} else if( k == 2 && U == 8 && q_size == 6 ) {
		SEARCH_FUNCTION_NAME<get_6_gram, 8, 2>();
	} else if( k == 4 && U == 8 && q_size == 6 ) {
		SEARCH_FUNCTION_NAME<get_6_gram, 8, 4>();
	} else if( k == 1 && U == 4 && q_size == 7 ) {
		SEARCH_FUNCTION_NAME<get_7_gram, 4, 1>();
	} else if( k == 2 && U == 4 && q_size == 7 ) {
		SEARCH_FUNCTION_NAME<get_7_gram, 4, 2>();
	} else if( k == 4 && U == 4 && q_size == 7 ) {
		SEARCH_FUNCTION_NAME<get_7_gram, 4, 4>();
	} else if( k == 1 && U == 8 && q_size == 7 ) {
		SEARCH_FUNCTION_NAME<get_7_gram, 8, 1>();
	} else if( k == 2 && U == 8 && q_size == 7 ) {
		SEARCH_FUNCTION_NAME<get_7_gram, 8, 2>();
	} else if( k == 4 && U == 8 && q_size == 7 ) {
		SEARCH_FUNCTION_NAME<get_7_gram, 8, 4>();
	} else if( k == 1 && U == 4 && q_size == 8 ) {
		SEARCH_FUNCTION_NAME<get_8_gram, 4, 1>();
	} else if( k == 2 && U == 4 && q_size == 8 ) {
		SEARCH_FUNCTION_NAME<get_8_gram, 4, 2>();
	} else if( k == 4 && U == 4 && q_size == 8 ) {
		SEARCH_FUNCTION_NAME<get_8_gram, 4, 4>();
	} else if( k == 1 && U == 8 && q_size == 8 ) {
		SEARCH_FUNCTION_NAME<get_8_gram, 8, 1>();
	} else if( k == 2 && U == 8 && q_size == 8 ) {
		SEARCH_FUNCTION_NAME<get_8_gram, 8, 2>();
	} else if( k == 4 && U == 8 && q_size == 8 ) {
		SEARCH_FUNCTION_NAME<get_8_gram, 8, 4>();
	} else if( k == 1 && U == 4 && q_size == 9 ) {
		SEARCH_FUNCTION_NAME<get_9_gram, 4, 1>();
	} else if( k == 2 && U == 4 && q_size == 9 ) {
		SEARCH_FUNCTION_NAME<get_9_gram, 4, 2>();
	} else if( k == 4 && U == 4 && q_size == 9 ) {
		SEARCH_FUNCTION_NAME<get_9_gram, 4, 4>();
	} else if( k == 1 && U == 8 && q_size == 9 ) {
		SEARCH_FUNCTION_NAME<get_9_gram, 8, 1>();
	} else if( k == 2 && U == 8 && q_size == 9 ) {
		SEARCH_FUNCTION_NAME<get_9_gram, 8, 2>();
	} else if( k == 4 && U == 8 && q_size == 9 ) {
		SEARCH_FUNCTION_NAME<get_9_gram, 8, 4>();
	} else if( k == 1 && U == 4 && q_size == 10 ) {
		SEARCH_FUNCTION_NAME<get_10_gram, 4, 1>();
	} else if( k == 2 && U == 4 && q_size == 10 ) {
		SEARCH_FUNCTION_NAME<get_10_gram, 4, 2>();
	} else if( k == 4 && U == 4 && q_size == 10 ) {
		SEARCH_FUNCTION_NAME<get_10_gram, 4, 4>();
	} else if( k == 1 && U == 8 && q_size == 10 ) {
		SEARCH_FUNCTION_NAME<get_10_gram, 8, 1>();
	} else if( k == 2 && U == 8 && q_size == 10 ) {
		SEARCH_FUNCTION_NAME<get_10_gram, 8, 2>();
	} else if( k == 4 && U == 8 && q_size == 10 ) {
		SEARCH_FUNCTION_NAME<get_10_gram, 8, 4>();
	} else {
		printf("Error: Not supported parameters\n"); exit(1); 
	}
}



#endif