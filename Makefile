
etdc_mag_dna_l2: etdc_mag_new.cpp  etdc_mag_new.h common.h
	g++ -Wno-aggressive-loop-optimizations -Wno-unused-result -Wno-narrowing -D Q_GRAM_UTIL_V=q_gram_utilities_dna_l_bits -D Q_GRAM_UTIL_NEW_L=2 -O3 -std=c++11 -o etdc_mag_dna_l2 etdc_mag_new.cpp 
	
etdc_mag_dna_l3: etdc_mag_new.cpp  etdc_mag_new.h common.h
	g++ -Wno-aggressive-loop-optimizations -Wno-unused-result -Wno-narrowing -D Q_GRAM_UTIL_V=q_gram_utilities_dna_l_bits -D Q_GRAM_UTIL_NEW_L=3 -O3 -std=c++11 -o etdc_mag_dna_l3 etdc_mag_new.cpp 
	
etdc_mag_dna_l4: etdc_mag_new.cpp  etdc_mag_new.h common.h
	g++ -Wno-aggressive-loop-optimizations -Wno-unused-result -Wno-narrowing -D Q_GRAM_UTIL_V=q_gram_utilities_dna_l_bits -D Q_GRAM_UTIL_NEW_L=4 -O3 -std=c++11 -o etdc_mag_dna_l4 etdc_mag_new.cpp 
	
etdc_mag_l2: etdc_mag_new.cpp  etdc_mag_new.h common.h
	g++ -Wno-aggressive-loop-optimizations -Wno-unused-result -Wno-narrowing -D Q_GRAM_UTIL_V=q_gram_utilities_l_bits -D Q_GRAM_UTIL_NEW_L=2 -O3 -std=c++11 -o etdc_mag_l2 etdc_mag_new.cpp 
	
etdc_mag_l3: etdc_mag_new.cpp  etdc_mag_new.h common.h
	g++ -Wno-aggressive-loop-optimizations -Wno-unused-result -Wno-narrowing -D Q_GRAM_UTIL_V=q_gram_utilities_l_bits -D Q_GRAM_UTIL_NEW_L=3 -O3 -std=c++11 -o etdc_mag_l3 etdc_mag_new.cpp 
	
etdc_mag_l4: etdc_mag_new.cpp  etdc_mag_new.h common.h
	g++ -Wno-aggressive-loop-optimizations -Wno-unused-result -Wno-narrowing -D Q_GRAM_UTIL_V=q_gram_utilities_l_bits -D Q_GRAM_UTIL_NEW_L=4 -O3 -std=c++11 -o etdc_mag_l4 etdc_mag_new.cpp 
	
etdc_mag: etdc_mag.cpp etdc_mag.h common.h
	g++ -Wno-aggressive-loop-optimizations -Wno-unused-result -Wno-narrowing -O3 -std=c++11 -o etdc_mag etdc_mag.cpp

etdc_brute: etdc_brute.cpp common.h
	g++ -Wno-aggressive-loop-optimizations -Wno-unused-result -Wno-narrowing -O3 -std=c++11 -Wno-unused-function -o etdc_brute etdc_brute.cpp
	
etdc_tool: etdc_tool.cpp common.h
	g++ -Wno-aggressive-loop-optimizations -Wno-unused-result -Wno-narrowing -O3 -std=c++11 -Wno-unused-function -Wno-unused-variable -o etdc_tool etdc_tool.cpp
	
all: etdc_mag_dna_l2 etdc_mag_dna_l3 etdc_mag_dna_l4 etdc_mag_l2 etdc_mag_l3 etdc_mag_l4 etdc_mag etdc_brute etdc_tool

clean:
	rm -f etdc_mag_dna_l2 etdc_mag_dna_l3 etdc_mag_dna_l4 etdc_mag_l2 etdc_mag_l3 etdc_mag_l4 etdc_mag etdc_brute etdc_tool *.exe *.pdb
