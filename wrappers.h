#ifndef WRAPPERS_H
#define WRAPPERS_H

#include "common.h"

/* 
// Define these constants in cpp file:

#define SEARCH_FUNCTION_NAME mag
#define BUILD_INDEXED_PATTERNS_FUNCTION mag_build_indexed_patterns
#define MAP_CREATEION_FUNCTION CreateMapByHistogramBinPack
*/

/* Function Declarations */
template <class T> int CreateMap_wrapper(T*, int, int);
unsigned int build_indexed_patterns_wrapper(const long, const unsigned int);
unsigned int search_wrapper(const int, const unsigned int, const unsigned int, const unsigned int);
/* EncodeText is defined in smag.h */
template<class T, unsigned int Q, unsigned int U, unsigned int K, unsigned int SIGMA> void EncodeText(T * );
template<class T> void EncodeText_wrapper(T *, const int, unsigned int, unsigned int, unsigned int);

/* Definitions */

template <class T> int CreateMap_wrapper(T* t, int n, int new_sigma) {
	if(new_sigma == 4) {
		return MAP_CREATEION_FUNCTION<T, 4> (t, n);
	} else if(new_sigma == 5) {
		return MAP_CREATEION_FUNCTION<T, 5> (t, n);
	} else if(new_sigma == 6) {
		return MAP_CREATEION_FUNCTION<T, 6> (t, n);
	} else if(new_sigma == 7) {
		return MAP_CREATEION_FUNCTION<T, 7> (t, n);
	} else if(new_sigma == 8) {
		return MAP_CREATEION_FUNCTION<T, 8> (t, n);
	} else if(new_sigma == 9) {
		return MAP_CREATEION_FUNCTION<T, 9> (t, n);
	} else if(new_sigma == 10) {
		return MAP_CREATEION_FUNCTION<T, 10> (t, n);
	} else if(new_sigma == 11) {
		return MAP_CREATEION_FUNCTION<T, 11> (t, n);
	} else if(new_sigma == 12) {
		return MAP_CREATEION_FUNCTION<T, 12> (t, n);
	} else if(new_sigma == 13) {
		return MAP_CREATEION_FUNCTION<T, 13> (t, n);
	} else if(new_sigma == 14) {
		return MAP_CREATEION_FUNCTION<T, 14> (t, n);
	} else if(new_sigma == 15) {
		return MAP_CREATEION_FUNCTION<T, 15> (t, n);
	} else if(new_sigma == 16) {
		return MAP_CREATEION_FUNCTION<T, 16> (t, n);
	} else if(new_sigma == 17) {
		return MAP_CREATEION_FUNCTION<T, 17> (t, n);
	} else if(new_sigma == 18) {
		return MAP_CREATEION_FUNCTION<T, 18> (t, n);
	} else if(new_sigma == 19) {
		return MAP_CREATEION_FUNCTION<T, 19> (t, n);
	} else if(new_sigma == 20) {
		return MAP_CREATEION_FUNCTION<T, 20> (t, n);
	} else if(new_sigma == 22) {
		return MAP_CREATEION_FUNCTION<T, 22> (t, n);
	} else if(new_sigma == 26) {
		return MAP_CREATEION_FUNCTION<T, 26> (t, n);
	} else if(new_sigma == 90) {
		return MAP_CREATEION_FUNCTION<T, 90> (t, n);
	} else {
		printf("Error: given sigma size is not supported"); exit(1);
	}
}

unsigned int build_indexed_patterns_wrapper(const long sigma, const unsigned int q_size) {
	if(sigma == 4) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 4>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 4>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 4>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 4>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 4>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 4>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 4>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 4>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 4>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 4>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 5) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 5>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 5>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 5>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 5>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 5>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 5>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 5>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 5>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 5>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 5>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 6) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 6>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 6>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 6>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 6>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 6>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 6>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 6>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 6>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 6>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 6>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 7) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 7>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 7>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 7>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 7>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 7>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 7>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 7>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 7>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 7>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 7>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 8) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 8>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 8>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 8>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 8>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 8>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 8>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 8>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 8>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 8>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 8>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 9) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 9>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 9>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 9>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 9>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 9>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 9>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 9>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 9>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 9>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 9>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 10) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 10>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 10>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 10>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 10>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 10>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 10>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 10>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 10>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 10>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 10>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 11) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 11>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 11>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 11>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 11>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 11>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 11>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 11>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 11>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 11>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 11>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 12) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 12>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 12>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 12>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 12>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 12>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 12>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 12>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 12>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 12>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 12>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 13) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 13>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 13>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 13>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 13>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 13>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 13>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 13>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 13>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 13>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 13>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 14) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 14>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 14>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 14>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 14>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 14>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 14>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 14>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 14>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 14>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 14>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 15) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 15>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 15>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 15>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 15>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 15>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 15>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 15>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 15>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 15>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 15>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 16) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 16>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 16>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 16>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 16>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 16>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 16>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 16>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 16>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 16>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 16>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 17) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 17>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 17>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 17>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 17>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 17>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 17>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 17>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 17>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 17>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 17>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 18) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 18>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 18>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 18>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 18>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 18>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 18>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 18>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 18>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 18>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 18>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 19) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 19>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 19>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 19>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 19>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 19>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 19>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 19>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 19>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 19>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 19>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 20) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 20>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 20>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 20>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 20>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 20>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 20>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 20>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 20>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 20>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 20>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 22) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 22>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 22>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 22>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 22>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 22>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 22>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 22>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 22>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 22>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 22>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 26) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 26>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 26>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 26>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 26>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 26>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 26>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 26>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 26>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 26>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 26>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 90) {
		if( q_size == 1 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<1, 90>();
		} else if( q_size == 2 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<2, 90>();
		} else if( q_size == 3 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<3, 90>();
		} else if( q_size == 4 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<4, 90>();
		} else if( q_size == 5 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<5, 90>();
		} else if( q_size == 6 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<6, 90>();
		} else if( q_size == 7 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<7, 90>();
		} else if( q_size == 8 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<8, 90>();
		} else if( q_size == 9 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<9, 90>();
		} else if( q_size == 10 ) {
			BUILD_INDEXED_PATTERNS_FUNCTION<10, 90>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}

}

unsigned int search_wrapper(const int sigma, const unsigned int U, const unsigned int k, const unsigned int q_size) {
	// Generated code
	if(sigma == 4) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 4>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 4>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 4>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 4>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 4>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 4>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 4>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 4>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 4>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 4>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 4>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 4>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 4>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 4>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 4>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 4>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 4>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 4>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 4>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 4>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 4>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 4>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 4>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 4>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 4>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 4>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 4>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 4>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 4>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 4>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 4>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 4>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 4>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 4>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 4>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 4>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 4>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 4>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 4>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 4>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 4>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 4>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 4>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 4>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 4>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 4>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 4>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 4>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 4>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 4>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 4>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 4>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 4>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 4>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 4>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 4>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 4>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 4>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 4>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 4>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 5) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 5>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 5>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 5>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 5>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 5>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 5>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 5>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 5>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 5>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 5>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 5>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 5>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 5>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 5>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 5>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 5>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 5>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 5>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 5>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 5>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 5>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 5>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 5>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 5>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 5>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 5>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 5>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 5>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 5>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 5>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 5>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 5>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 5>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 5>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 5>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 5>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 5>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 5>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 5>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 5>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 5>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 5>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 5>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 5>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 5>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 5>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 5>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 5>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 5>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 5>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 5>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 5>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 5>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 5>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 5>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 5>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 5>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 5>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 5>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 5>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 6) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 6>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 6>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 6>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 6>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 6>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 6>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 6>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 6>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 6>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 6>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 6>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 6>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 6>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 6>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 6>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 6>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 6>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 6>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 6>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 6>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 6>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 6>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 6>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 6>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 6>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 6>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 6>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 6>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 6>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 6>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 6>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 6>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 6>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 6>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 6>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 6>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 6>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 6>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 6>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 6>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 6>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 6>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 6>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 6>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 6>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 6>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 6>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 6>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 6>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 6>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 6>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 6>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 6>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 6>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 6>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 6>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 6>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 6>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 6>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 6>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 7) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 7>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 7>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 7>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 7>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 7>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 7>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 7>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 7>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 7>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 7>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 7>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 7>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 7>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 7>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 7>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 7>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 7>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 7>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 7>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 7>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 7>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 7>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 7>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 7>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 7>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 7>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 7>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 7>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 7>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 7>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 7>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 7>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 7>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 7>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 7>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 7>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 7>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 7>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 7>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 7>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 7>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 7>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 7>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 7>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 7>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 7>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 7>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 7>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 7>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 7>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 7>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 7>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 7>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 7>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 7>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 7>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 7>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 7>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 7>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 7>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 8) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 8>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 8>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 8>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 8>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 8>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 8>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 8>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 8>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 8>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 8>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 8>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 8>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 8>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 8>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 8>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 8>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 8>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 8>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 8>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 8>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 8>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 8>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 8>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 8>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 8>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 8>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 8>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 8>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 8>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 8>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 8>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 8>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 8>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 8>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 8>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 8>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 8>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 8>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 8>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 8>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 8>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 8>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 8>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 8>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 8>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 8>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 8>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 8>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 8>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 8>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 8>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 8>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 8>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 8>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 8>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 8>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 8>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 8>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 8>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 8>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 9) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 9>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 9>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 9>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 9>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 9>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 9>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 9>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 9>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 9>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 9>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 9>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 9>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 9>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 9>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 9>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 9>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 9>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 9>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 9>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 9>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 9>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 9>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 9>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 9>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 9>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 9>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 9>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 9>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 9>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 9>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 9>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 9>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 9>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 9>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 9>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 9>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 9>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 9>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 9>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 9>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 9>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 9>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 9>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 9>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 9>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 9>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 9>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 9>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 9>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 9>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 9>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 9>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 9>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 9>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 9>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 9>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 9>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 9>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 9>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 9>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 10) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 10>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 10>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 10>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 10>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 10>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 10>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 10>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 10>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 10>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 10>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 10>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 10>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 10>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 10>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 10>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 10>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 10>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 10>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 10>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 10>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 10>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 10>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 10>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 10>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 10>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 10>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 10>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 10>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 10>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 10>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 10>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 10>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 10>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 10>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 10>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 10>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 10>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 10>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 10>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 10>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 10>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 10>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 10>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 10>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 10>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 10>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 10>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 10>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 10>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 10>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 10>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 10>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 10>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 10>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 10>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 10>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 10>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 10>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 10>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 10>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 11) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 11>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 11>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 11>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 11>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 11>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 11>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 11>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 11>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 11>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 11>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 11>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 11>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 11>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 11>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 11>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 11>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 11>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 11>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 11>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 11>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 11>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 11>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 11>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 11>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 11>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 11>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 11>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 11>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 11>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 11>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 11>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 11>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 11>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 11>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 11>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 11>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 11>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 11>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 11>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 11>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 11>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 11>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 11>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 11>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 11>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 11>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 11>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 11>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 11>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 11>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 11>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 11>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 11>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 11>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 11>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 11>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 11>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 11>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 11>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 11>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 12) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 12>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 12>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 12>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 12>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 12>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 12>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 12>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 12>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 12>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 12>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 12>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 12>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 12>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 12>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 12>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 12>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 12>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 12>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 12>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 12>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 12>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 12>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 12>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 12>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 12>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 12>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 12>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 12>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 12>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 12>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 12>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 12>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 12>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 12>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 12>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 12>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 12>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 12>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 12>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 12>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 12>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 12>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 12>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 12>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 12>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 12>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 12>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 12>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 12>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 12>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 12>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 12>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 12>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 12>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 12>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 12>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 12>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 12>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 12>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 12>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 13) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 13>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 13>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 13>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 13>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 13>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 13>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 13>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 13>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 13>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 13>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 13>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 13>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 13>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 13>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 13>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 13>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 13>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 13>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 13>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 13>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 13>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 13>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 13>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 13>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 13>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 13>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 13>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 13>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 13>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 13>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 13>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 13>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 13>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 13>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 13>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 13>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 13>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 13>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 13>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 13>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 13>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 13>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 13>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 13>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 13>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 13>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 13>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 13>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 13>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 13>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 13>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 13>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 13>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 13>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 13>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 13>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 13>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 13>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 13>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 13>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 14) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 14>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 14>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 14>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 14>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 14>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 14>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 14>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 14>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 14>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 14>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 14>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 14>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 14>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 14>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 14>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 14>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 14>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 14>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 14>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 14>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 14>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 14>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 14>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 14>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 14>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 14>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 14>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 14>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 14>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 14>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 14>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 14>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 14>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 14>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 14>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 14>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 14>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 14>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 14>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 14>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 14>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 14>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 14>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 14>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 14>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 14>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 14>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 14>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 14>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 14>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 14>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 14>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 14>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 14>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 14>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 14>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 14>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 14>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 14>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 14>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 15) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 15>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 15>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 15>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 15>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 15>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 15>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 15>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 15>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 15>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 15>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 15>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 15>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 15>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 15>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 15>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 15>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 15>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 15>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 15>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 15>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 15>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 15>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 15>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 15>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 15>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 15>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 15>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 15>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 15>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 15>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 15>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 15>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 15>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 15>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 15>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 15>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 15>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 15>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 15>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 15>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 15>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 15>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 15>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 15>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 15>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 15>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 15>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 15>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 15>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 15>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 15>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 15>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 15>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 15>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 15>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 15>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 15>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 15>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 15>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 15>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 16) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 16>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 16>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 16>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 16>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 16>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 16>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 16>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 16>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 16>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 16>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 16>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 16>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 16>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 16>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 16>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 16>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 16>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 16>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 16>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 16>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 16>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 16>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 16>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 16>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 16>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 16>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 16>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 16>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 16>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 16>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 16>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 16>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 16>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 16>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 16>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 16>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 16>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 16>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 16>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 16>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 16>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 16>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 16>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 16>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 16>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 16>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 16>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 16>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 16>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 16>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 16>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 16>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 16>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 16>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 16>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 16>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 16>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 16>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 16>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 16>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 17) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 17>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 17>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 17>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 17>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 17>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 17>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 17>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 17>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 17>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 17>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 17>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 17>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 17>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 17>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 17>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 17>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 17>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 17>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 17>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 17>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 17>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 17>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 17>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 17>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 17>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 17>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 17>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 17>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 17>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 17>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 17>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 17>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 17>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 17>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 17>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 17>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 17>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 17>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 17>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 17>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 17>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 17>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 17>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 17>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 17>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 17>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 17>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 17>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 17>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 17>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 17>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 17>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 17>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 17>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 17>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 17>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 17>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 17>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 17>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 17>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 18) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 18>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 18>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 18>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 18>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 18>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 18>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 18>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 18>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 18>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 18>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 18>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 18>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 18>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 18>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 18>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 18>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 18>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 18>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 18>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 18>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 18>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 18>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 18>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 18>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 18>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 18>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 18>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 18>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 18>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 18>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 18>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 18>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 18>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 18>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 18>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 18>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 18>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 18>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 18>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 18>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 18>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 18>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 18>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 18>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 18>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 18>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 18>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 18>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 18>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 18>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 18>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 18>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 18>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 18>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 18>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 18>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 18>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 18>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 18>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 18>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 19) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 19>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 19>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 19>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 19>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 19>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 19>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 19>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 19>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 19>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 19>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 19>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 19>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 19>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 19>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 19>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 19>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 19>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 19>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 19>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 19>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 19>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 19>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 19>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 19>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 19>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 19>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 19>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 19>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 19>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 19>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 19>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 19>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 19>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 19>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 19>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 19>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 19>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 19>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 19>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 19>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 19>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 19>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 19>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 19>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 19>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 19>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 19>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 19>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 19>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 19>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 19>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 19>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 19>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 19>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 19>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 19>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 19>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 19>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 19>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 19>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 20) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 20>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 20>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 20>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 20>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 20>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 20>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 20>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 20>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 20>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 20>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 20>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 20>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 20>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 20>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 20>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 20>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 20>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 20>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 20>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 20>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 20>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 20>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 20>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 20>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 20>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 20>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 20>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 20>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 20>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 20>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 20>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 20>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 20>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 20>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 20>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 20>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 20>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 20>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 20>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 20>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 20>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 20>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 20>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 20>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 20>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 20>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 20>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 20>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 20>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 20>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 20>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 20>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 20>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 20>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 20>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 20>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 20>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 20>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 20>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 20>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 22) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 22>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 22>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 22>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 22>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 22>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 22>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 22>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 22>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 22>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 22>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 22>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 22>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 22>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 22>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 22>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 22>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 22>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 22>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 22>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 22>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 22>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 22>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 22>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 22>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 22>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 22>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 22>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 22>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 22>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 22>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 22>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 22>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 22>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 22>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 22>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 22>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 22>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 22>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 22>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 22>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 22>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 22>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 22>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 22>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 22>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 22>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 22>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 22>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 22>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 22>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 22>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 22>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 22>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 22>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 22>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 22>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 22>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 22>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 22>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 22>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 26) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 26>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 26>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 26>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 26>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 26>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 26>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 26>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 26>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 26>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 26>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 26>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 26>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 26>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 26>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 26>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 26>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 26>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 26>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 26>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 26>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 26>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 26>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 26>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 26>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 26>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 26>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 26>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 26>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 26>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 26>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 26>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 26>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 26>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 26>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 26>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 26>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 26>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 26>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 26>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 26>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 26>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 26>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 26>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 26>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 26>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 26>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 26>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 26>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 26>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 26>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 26>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 26>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 26>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 26>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 26>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 26>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 26>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 26>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 26>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 26>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
	if(sigma == 90) {
		if( k == 1 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 1, 1, 90>();
		} else if( k == 2 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 2, 1, 90>();
		} else if( k == 4 && U == 4 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<4, 4, 1, 90>();
		} else if( k == 1 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 1, 1, 90>();
		} else if( k == 2 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 2, 1, 90>();
		} else if( k == 4 && U == 8 && q_size == 1 ) {
			SEARCH_FUNCTION_NAME<8, 4, 1, 90>();
		} else if( k == 1 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 1, 2, 90>();
		} else if( k == 2 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 2, 2, 90>();
		} else if( k == 4 && U == 4 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<4, 4, 2, 90>();
		} else if( k == 1 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 1, 2, 90>();
		} else if( k == 2 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 2, 2, 90>();
		} else if( k == 4 && U == 8 && q_size == 2 ) {
			SEARCH_FUNCTION_NAME<8, 4, 2, 90>();
		} else if( k == 1 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 1, 3, 90>();
		} else if( k == 2 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 2, 3, 90>();
		} else if( k == 4 && U == 4 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<4, 4, 3, 90>();
		} else if( k == 1 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 1, 3, 90>();
		} else if( k == 2 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 2, 3, 90>();
		} else if( k == 4 && U == 8 && q_size == 3 ) {
			SEARCH_FUNCTION_NAME<8, 4, 3, 90>();
		} else if( k == 1 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 1, 4, 90>();
		} else if( k == 2 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 2, 4, 90>();
		} else if( k == 4 && U == 4 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<4, 4, 4, 90>();
		} else if( k == 1 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 1, 4, 90>();
		} else if( k == 2 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 2, 4, 90>();
		} else if( k == 4 && U == 8 && q_size == 4 ) {
			SEARCH_FUNCTION_NAME<8, 4, 4, 90>();
		} else if( k == 1 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 1, 5, 90>();
		} else if( k == 2 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 2, 5, 90>();
		} else if( k == 4 && U == 4 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<4, 4, 5, 90>();
		} else if( k == 1 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 1, 5, 90>();
		} else if( k == 2 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 2, 5, 90>();
		} else if( k == 4 && U == 8 && q_size == 5 ) {
			SEARCH_FUNCTION_NAME<8, 4, 5, 90>();
		} else if( k == 1 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 1, 6, 90>();
		} else if( k == 2 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 2, 6, 90>();
		} else if( k == 4 && U == 4 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<4, 4, 6, 90>();
		} else if( k == 1 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 1, 6, 90>();
		} else if( k == 2 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 2, 6, 90>();
		} else if( k == 4 && U == 8 && q_size == 6 ) {
			SEARCH_FUNCTION_NAME<8, 4, 6, 90>();
		} else if( k == 1 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 1, 7, 90>();
		} else if( k == 2 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 2, 7, 90>();
		} else if( k == 4 && U == 4 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<4, 4, 7, 90>();
		} else if( k == 1 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 1, 7, 90>();
		} else if( k == 2 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 2, 7, 90>();
		} else if( k == 4 && U == 8 && q_size == 7 ) {
			SEARCH_FUNCTION_NAME<8, 4, 7, 90>();
		} else if( k == 1 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 1, 8, 90>();
		} else if( k == 2 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 2, 8, 90>();
		} else if( k == 4 && U == 4 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<4, 4, 8, 90>();
		} else if( k == 1 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 1, 8, 90>();
		} else if( k == 2 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 2, 8, 90>();
		} else if( k == 4 && U == 8 && q_size == 8 ) {
			SEARCH_FUNCTION_NAME<8, 4, 8, 90>();
		} else if( k == 1 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 1, 9, 90>();
		} else if( k == 2 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 2, 9, 90>();
		} else if( k == 4 && U == 4 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<4, 4, 9, 90>();
		} else if( k == 1 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 1, 9, 90>();
		} else if( k == 2 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 2, 9, 90>();
		} else if( k == 4 && U == 8 && q_size == 9 ) {
			SEARCH_FUNCTION_NAME<8, 4, 9, 90>();
		} else if( k == 1 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 1, 10, 90>();
		} else if( k == 2 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 2, 10, 90>();
		} else if( k == 4 && U == 4 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<4, 4, 10, 90>();
		} else if( k == 1 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 1, 10, 90>();
		} else if( k == 2 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 2, 10, 90>();
		} else if( k == 4 && U == 8 && q_size == 10 ) {
			SEARCH_FUNCTION_NAME<8, 4, 10, 90>();
		} else {
			printf("Error: Not supported parameters\n"); exit(1); 
		}
	}
}

template<class T> void EncodeText_wrapper(T * text, const int sigma, unsigned int q_gram, unsigned int u, unsigned int k) {
	if(sigma == 4) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 4>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 4>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 4>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 4>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 4>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 4>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 4>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 4>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 4>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 4>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 4>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 4>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 4>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 4>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 4>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 4>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 4>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 4>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 4>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 4>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 4>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 4>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 4>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 4>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 4>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 4>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 4>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 4>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 4>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 4>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 4>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 4>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 4>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 4>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 4>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 4>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 4>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 4>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 4>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 4>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 4>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 4>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 4>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 4>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 4>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 4>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 4>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 4>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 4>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 4>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 4>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 4>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 4>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 4>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 4>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 4>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 4>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 4>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 4>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 4>(text);
		}
	}
	if(sigma == 5) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 5>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 5>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 5>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 5>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 5>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 5>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 5>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 5>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 5>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 5>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 5>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 5>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 5>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 5>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 5>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 5>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 5>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 5>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 5>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 5>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 5>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 5>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 5>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 5>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 5>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 5>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 5>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 5>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 5>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 5>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 5>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 5>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 5>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 5>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 5>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 5>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 5>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 5>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 5>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 5>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 5>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 5>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 5>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 5>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 5>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 5>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 5>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 5>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 5>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 5>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 5>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 5>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 5>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 5>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 5>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 5>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 5>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 5>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 5>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 5>(text);
		}
	}
	if(sigma == 6) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 6>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 6>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 6>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 6>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 6>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 6>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 6>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 6>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 6>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 6>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 6>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 6>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 6>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 6>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 6>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 6>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 6>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 6>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 6>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 6>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 6>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 6>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 6>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 6>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 6>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 6>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 6>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 6>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 6>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 6>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 6>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 6>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 6>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 6>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 6>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 6>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 6>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 6>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 6>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 6>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 6>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 6>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 6>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 6>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 6>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 6>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 6>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 6>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 6>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 6>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 6>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 6>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 6>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 6>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 6>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 6>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 6>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 6>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 6>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 6>(text);
		}
	}
	if(sigma == 7) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 7>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 7>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 7>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 7>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 7>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 7>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 7>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 7>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 7>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 7>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 7>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 7>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 7>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 7>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 7>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 7>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 7>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 7>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 7>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 7>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 7>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 7>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 7>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 7>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 7>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 7>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 7>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 7>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 7>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 7>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 7>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 7>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 7>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 7>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 7>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 7>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 7>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 7>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 7>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 7>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 7>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 7>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 7>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 7>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 7>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 7>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 7>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 7>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 7>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 7>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 7>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 7>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 7>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 7>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 7>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 7>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 7>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 7>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 7>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 7>(text);
		}
	}
	if(sigma == 8) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 8>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 8>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 8>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 8>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 8>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 8>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 8>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 8>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 8>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 8>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 8>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 8>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 8>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 8>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 8>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 8>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 8>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 8>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 8>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 8>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 8>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 8>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 8>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 8>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 8>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 8>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 8>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 8>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 8>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 8>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 8>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 8>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 8>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 8>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 8>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 8>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 8>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 8>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 8>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 8>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 8>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 8>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 8>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 8>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 8>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 8>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 8>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 8>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 8>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 8>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 8>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 8>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 8>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 8>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 8>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 8>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 8>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 8>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 8>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 8>(text);
		}
	}
	if(sigma == 9) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 9>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 9>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 9>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 9>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 9>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 9>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 9>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 9>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 9>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 9>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 9>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 9>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 9>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 9>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 9>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 9>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 9>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 9>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 9>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 9>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 9>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 9>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 9>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 9>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 9>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 9>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 9>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 9>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 9>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 9>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 9>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 9>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 9>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 9>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 9>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 9>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 9>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 9>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 9>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 9>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 9>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 9>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 9>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 9>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 9>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 9>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 9>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 9>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 9>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 9>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 9>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 9>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 9>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 9>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 9>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 9>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 9>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 9>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 9>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 9>(text);
		}
	}
	if(sigma == 10) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 10>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 10>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 10>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 10>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 10>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 10>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 10>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 10>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 10>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 10>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 10>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 10>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 10>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 10>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 10>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 10>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 10>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 10>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 10>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 10>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 10>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 10>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 10>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 10>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 10>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 10>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 10>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 10>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 10>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 10>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 10>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 10>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 10>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 10>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 10>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 10>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 10>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 10>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 10>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 10>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 10>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 10>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 10>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 10>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 10>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 10>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 10>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 10>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 10>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 10>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 10>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 10>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 10>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 10>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 10>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 10>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 10>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 10>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 10>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 10>(text);
		}
	}
	if(sigma == 11) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 11>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 11>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 11>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 11>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 11>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 11>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 11>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 11>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 11>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 11>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 11>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 11>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 11>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 11>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 11>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 11>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 11>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 11>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 11>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 11>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 11>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 11>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 11>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 11>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 11>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 11>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 11>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 11>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 11>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 11>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 11>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 11>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 11>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 11>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 11>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 11>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 11>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 11>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 11>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 11>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 11>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 11>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 11>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 11>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 11>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 11>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 11>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 11>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 11>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 11>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 11>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 11>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 11>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 11>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 11>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 11>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 11>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 11>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 11>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 11>(text);
		}
	}
	if(sigma == 12) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 12>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 12>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 12>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 12>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 12>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 12>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 12>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 12>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 12>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 12>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 12>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 12>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 12>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 12>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 12>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 12>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 12>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 12>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 12>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 12>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 12>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 12>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 12>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 12>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 12>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 12>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 12>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 12>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 12>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 12>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 12>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 12>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 12>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 12>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 12>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 12>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 12>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 12>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 12>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 12>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 12>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 12>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 12>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 12>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 12>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 12>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 12>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 12>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 12>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 12>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 12>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 12>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 12>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 12>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 12>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 12>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 12>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 12>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 12>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 12>(text);
		}
	}
	if(sigma == 13) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 13>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 13>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 13>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 13>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 13>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 13>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 13>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 13>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 13>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 13>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 13>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 13>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 13>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 13>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 13>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 13>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 13>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 13>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 13>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 13>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 13>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 13>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 13>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 13>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 13>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 13>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 13>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 13>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 13>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 13>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 13>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 13>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 13>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 13>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 13>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 13>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 13>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 13>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 13>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 13>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 13>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 13>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 13>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 13>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 13>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 13>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 13>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 13>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 13>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 13>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 13>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 13>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 13>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 13>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 13>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 13>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 13>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 13>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 13>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 13>(text);
		}
	}
	if(sigma == 14) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 14>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 14>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 14>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 14>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 14>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 14>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 14>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 14>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 14>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 14>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 14>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 14>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 14>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 14>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 14>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 14>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 14>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 14>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 14>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 14>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 14>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 14>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 14>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 14>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 14>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 14>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 14>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 14>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 14>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 14>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 14>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 14>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 14>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 14>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 14>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 14>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 14>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 14>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 14>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 14>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 14>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 14>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 14>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 14>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 14>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 14>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 14>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 14>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 14>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 14>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 14>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 14>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 14>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 14>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 14>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 14>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 14>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 14>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 14>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 14>(text);
		}
	}
	if(sigma == 15) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 15>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 15>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 15>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 15>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 15>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 15>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 15>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 15>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 15>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 15>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 15>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 15>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 15>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 15>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 15>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 15>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 15>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 15>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 15>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 15>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 15>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 15>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 15>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 15>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 15>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 15>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 15>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 15>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 15>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 15>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 15>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 15>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 15>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 15>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 15>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 15>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 15>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 15>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 15>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 15>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 15>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 15>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 15>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 15>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 15>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 15>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 15>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 15>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 15>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 15>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 15>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 15>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 15>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 15>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 15>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 15>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 15>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 15>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 15>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 15>(text);
		}
	}
	if(sigma == 16) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 16>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 16>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 16>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 16>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 16>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 16>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 16>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 16>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 16>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 16>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 16>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 16>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 16>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 16>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 16>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 16>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 16>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 16>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 16>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 16>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 16>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 16>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 16>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 16>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 16>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 16>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 16>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 16>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 16>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 16>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 16>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 16>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 16>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 16>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 16>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 16>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 16>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 16>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 16>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 16>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 16>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 16>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 16>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 16>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 16>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 16>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 16>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 16>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 16>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 16>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 16>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 16>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 16>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 16>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 16>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 16>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 16>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 16>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 16>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 16>(text);
		}
	}
	if(sigma == 17) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 17>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 17>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 17>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 17>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 17>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 17>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 17>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 17>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 17>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 17>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 17>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 17>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 17>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 17>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 17>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 17>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 17>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 17>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 17>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 17>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 17>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 17>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 17>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 17>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 17>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 17>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 17>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 17>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 17>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 17>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 17>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 17>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 17>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 17>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 17>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 17>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 17>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 17>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 17>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 17>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 17>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 17>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 17>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 17>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 17>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 17>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 17>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 17>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 17>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 17>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 17>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 17>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 17>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 17>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 17>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 17>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 17>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 17>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 17>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 17>(text);
		}
	}
	if(sigma == 18) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 18>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 18>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 18>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 18>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 18>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 18>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 18>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 18>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 18>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 18>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 18>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 18>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 18>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 18>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 18>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 18>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 18>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 18>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 18>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 18>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 18>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 18>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 18>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 18>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 18>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 18>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 18>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 18>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 18>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 18>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 18>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 18>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 18>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 18>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 18>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 18>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 18>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 18>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 18>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 18>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 18>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 18>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 18>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 18>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 18>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 18>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 18>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 18>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 18>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 18>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 18>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 18>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 18>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 18>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 18>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 18>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 18>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 18>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 18>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 18>(text);
		}
	}
	if(sigma == 19) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 19>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 19>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 19>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 19>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 19>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 19>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 19>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 19>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 19>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 19>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 19>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 19>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 19>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 19>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 19>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 19>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 19>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 19>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 19>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 19>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 19>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 19>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 19>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 19>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 19>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 19>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 19>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 19>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 19>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 19>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 19>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 19>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 19>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 19>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 19>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 19>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 19>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 19>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 19>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 19>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 19>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 19>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 19>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 19>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 19>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 19>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 19>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 19>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 19>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 19>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 19>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 19>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 19>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 19>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 19>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 19>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 19>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 19>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 19>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 19>(text);
		}
	}
	if(sigma == 20) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 20>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 20>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 20>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 20>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 20>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 20>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 20>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 20>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 20>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 20>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 20>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 20>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 20>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 20>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 20>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 20>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 20>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 20>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 20>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 20>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 20>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 20>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 20>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 20>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 20>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 20>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 20>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 20>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 20>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 20>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 20>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 20>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 20>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 20>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 20>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 20>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 20>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 20>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 20>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 20>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 20>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 20>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 20>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 20>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 20>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 20>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 20>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 20>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 20>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 20>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 20>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 20>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 20>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 20>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 20>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 20>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 20>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 20>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 20>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 20>(text);
		}
	}
	if(sigma == 22) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 22>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 22>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 22>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 22>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 22>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 22>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 22>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 22>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 22>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 22>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 22>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 22>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 22>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 22>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 22>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 22>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 22>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 22>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 22>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 22>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 22>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 22>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 22>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 22>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 22>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 22>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 22>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 22>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 22>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 22>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 22>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 22>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 22>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 22>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 22>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 22>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 22>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 22>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 22>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 22>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 22>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 22>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 22>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 22>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 22>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 22>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 22>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 22>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 22>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 22>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 22>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 22>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 22>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 22>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 22>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 22>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 22>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 22>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 22>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 22>(text);
		}
	}
	if(sigma == 26) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 26>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 26>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 26>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 26>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 26>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 26>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 26>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 26>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 26>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 26>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 26>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 26>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 26>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 26>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 26>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 26>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 26>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 26>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 26>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 26>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 26>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 26>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 26>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 26>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 26>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 26>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 26>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 26>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 26>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 26>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 26>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 26>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 26>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 26>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 26>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 26>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 26>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 26>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 26>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 26>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 26>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 26>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 26>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 26>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 26>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 26>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 26>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 26>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 26>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 26>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 26>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 26>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 26>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 26>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 26>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 26>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 26>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 26>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 26>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 26>(text);
		}
	}
	if(sigma == 90) {
		if(0) {
		} else if(q_gram == 1 && u == 4 && k == 1) {
			EncodeText<T, 1, 4, 1, 90>(text);
		} else if(q_gram == 1 && u == 4 && k == 2) {
			EncodeText<T, 1, 4, 2, 90>(text);
		} else if(q_gram == 1 && u == 4 && k == 4) {
			EncodeText<T, 1, 4, 4, 90>(text);
		} else if(q_gram == 1 && u == 8 && k == 1) {
			EncodeText<T, 1, 8, 1, 90>(text);
		} else if(q_gram == 1 && u == 8 && k == 2) {
			EncodeText<T, 1, 8, 2, 90>(text);
		} else if(q_gram == 1 && u == 8 && k == 4) {
			EncodeText<T, 1, 8, 4, 90>(text);
		} else if(q_gram == 2 && u == 4 && k == 1) {
			EncodeText<T, 2, 4, 1, 90>(text);
		} else if(q_gram == 2 && u == 4 && k == 2) {
			EncodeText<T, 2, 4, 2, 90>(text);
		} else if(q_gram == 2 && u == 4 && k == 4) {
			EncodeText<T, 2, 4, 4, 90>(text);
		} else if(q_gram == 2 && u == 8 && k == 1) {
			EncodeText<T, 2, 8, 1, 90>(text);
		} else if(q_gram == 2 && u == 8 && k == 2) {
			EncodeText<T, 2, 8, 2, 90>(text);
		} else if(q_gram == 2 && u == 8 && k == 4) {
			EncodeText<T, 2, 8, 4, 90>(text);
		} else if(q_gram == 3 && u == 4 && k == 1) {
			EncodeText<T, 3, 4, 1, 90>(text);
		} else if(q_gram == 3 && u == 4 && k == 2) {
			EncodeText<T, 3, 4, 2, 90>(text);
		} else if(q_gram == 3 && u == 4 && k == 4) {
			EncodeText<T, 3, 4, 4, 90>(text);
		} else if(q_gram == 3 && u == 8 && k == 1) {
			EncodeText<T, 3, 8, 1, 90>(text);
		} else if(q_gram == 3 && u == 8 && k == 2) {
			EncodeText<T, 3, 8, 2, 90>(text);
		} else if(q_gram == 3 && u == 8 && k == 4) {
			EncodeText<T, 3, 8, 4, 90>(text);
		} else if(q_gram == 4 && u == 4 && k == 1) {
			EncodeText<T, 4, 4, 1, 90>(text);
		} else if(q_gram == 4 && u == 4 && k == 2) {
			EncodeText<T, 4, 4, 2, 90>(text);
		} else if(q_gram == 4 && u == 4 && k == 4) {
			EncodeText<T, 4, 4, 4, 90>(text);
		} else if(q_gram == 4 && u == 8 && k == 1) {
			EncodeText<T, 4, 8, 1, 90>(text);
		} else if(q_gram == 4 && u == 8 && k == 2) {
			EncodeText<T, 4, 8, 2, 90>(text);
		} else if(q_gram == 4 && u == 8 && k == 4) {
			EncodeText<T, 4, 8, 4, 90>(text);
		} else if(q_gram == 5 && u == 4 && k == 1) {
			EncodeText<T, 5, 4, 1, 90>(text);
		} else if(q_gram == 5 && u == 4 && k == 2) {
			EncodeText<T, 5, 4, 2, 90>(text);
		} else if(q_gram == 5 && u == 4 && k == 4) {
			EncodeText<T, 5, 4, 4, 90>(text);
		} else if(q_gram == 5 && u == 8 && k == 1) {
			EncodeText<T, 5, 8, 1, 90>(text);
		} else if(q_gram == 5 && u == 8 && k == 2) {
			EncodeText<T, 5, 8, 2, 90>(text);
		} else if(q_gram == 5 && u == 8 && k == 4) {
			EncodeText<T, 5, 8, 4, 90>(text);
		} else if(q_gram == 6 && u == 4 && k == 1) {
			EncodeText<T, 6, 4, 1, 90>(text);
		} else if(q_gram == 6 && u == 4 && k == 2) {
			EncodeText<T, 6, 4, 2, 90>(text);
		} else if(q_gram == 6 && u == 4 && k == 4) {
			EncodeText<T, 6, 4, 4, 90>(text);
		} else if(q_gram == 6 && u == 8 && k == 1) {
			EncodeText<T, 6, 8, 1, 90>(text);
		} else if(q_gram == 6 && u == 8 && k == 2) {
			EncodeText<T, 6, 8, 2, 90>(text);
		} else if(q_gram == 6 && u == 8 && k == 4) {
			EncodeText<T, 6, 8, 4, 90>(text);
		} else if(q_gram == 7 && u == 4 && k == 1) {
			EncodeText<T, 7, 4, 1, 90>(text);
		} else if(q_gram == 7 && u == 4 && k == 2) {
			EncodeText<T, 7, 4, 2, 90>(text);
		} else if(q_gram == 7 && u == 4 && k == 4) {
			EncodeText<T, 7, 4, 4, 90>(text);
		} else if(q_gram == 7 && u == 8 && k == 1) {
			EncodeText<T, 7, 8, 1, 90>(text);
		} else if(q_gram == 7 && u == 8 && k == 2) {
			EncodeText<T, 7, 8, 2, 90>(text);
		} else if(q_gram == 7 && u == 8 && k == 4) {
			EncodeText<T, 7, 8, 4, 90>(text);
		} else if(q_gram == 8 && u == 4 && k == 1) {
			EncodeText<T, 8, 4, 1, 90>(text);
		} else if(q_gram == 8 && u == 4 && k == 2) {
			EncodeText<T, 8, 4, 2, 90>(text);
		} else if(q_gram == 8 && u == 4 && k == 4) {
			EncodeText<T, 8, 4, 4, 90>(text);
		} else if(q_gram == 8 && u == 8 && k == 1) {
			EncodeText<T, 8, 8, 1, 90>(text);
		} else if(q_gram == 8 && u == 8 && k == 2) {
			EncodeText<T, 8, 8, 2, 90>(text);
		} else if(q_gram == 8 && u == 8 && k == 4) {
			EncodeText<T, 8, 8, 4, 90>(text);
		} else if(q_gram == 9 && u == 4 && k == 1) {
			EncodeText<T, 9, 4, 1, 90>(text);
		} else if(q_gram == 9 && u == 4 && k == 2) {
			EncodeText<T, 9, 4, 2, 90>(text);
		} else if(q_gram == 9 && u == 4 && k == 4) {
			EncodeText<T, 9, 4, 4, 90>(text);
		} else if(q_gram == 9 && u == 8 && k == 1) {
			EncodeText<T, 9, 8, 1, 90>(text);
		} else if(q_gram == 9 && u == 8 && k == 2) {
			EncodeText<T, 9, 8, 2, 90>(text);
		} else if(q_gram == 9 && u == 8 && k == 4) {
			EncodeText<T, 9, 8, 4, 90>(text);
		} else if(q_gram == 10 && u == 4 && k == 1) {
			EncodeText<T, 10, 4, 1, 90>(text);
		} else if(q_gram == 10 && u == 4 && k == 2) {
			EncodeText<T, 10, 4, 2, 90>(text);
		} else if(q_gram == 10 && u == 4 && k == 4) {
			EncodeText<T, 10, 4, 4, 90>(text);
		} else if(q_gram == 10 && u == 8 && k == 1) {
			EncodeText<T, 10, 8, 1, 90>(text);
		} else if(q_gram == 10 && u == 8 && k == 2) {
			EncodeText<T, 10, 8, 2, 90>(text);
		} else if(q_gram == 10 && u == 8 && k == 4) {
			EncodeText<T, 10, 8, 4, 90>(text);
		}
	}

}


#endif