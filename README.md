
# MAG on ETDC

This is MAG variant that searches patterns in ETDC encoded text. This source code was written for research purpose and has a minimal error checking. The code may be not very readable and comments may not be adequate. There is no warranty, your use of this code is at your own risk.

**Note:** Please refer to following link for source codes of MAG algorithm: https://github.com/rsusik/mag


## Requirements
* C++ compiler compatible 
* Unix based 64-bit OS (compilation works also in Cygwin)
* Python 3 (for [testing](#testing))
* [Docker](#docker) (optionally)

## Compilation

To compile the code run below line commands:
```shell
git clone https://github.com/rsusik/mag_etdc mag_etdc
cd mag_etdc
make all
```

## Running (MANUALLY)
*Note: it is recomended to run tests using python script `etdc_test.py` which is described below*

```shell
./filename [enc_patt] [m], [enc_set], [u], [k], [q], [sig], [denom], [set]
```

where:
* filename - one of compiled executable (e.g. etdc\_mag\_l2)
* enc\_patt - /path/to encoded patterns 
* enc\_set  - /path/to encoded set (e.g. /path/to/english.200MB)
* m         - pattern length
* u         - FAOSO param
* k         - FAOSO param
* q         - q-gram size
* sig       - alphabet size
* denom     - specifies the offset of index tag (n/demon)
* set       - file set (used only for other file names generation, e.g. dictionary)

example:
```shell
./path/to/etdc_mag /path/to/english.200MB.processed.100.32.patt.bin 32 /path/to/english.200MB.processed.etdc.bin 4 2 3 4 100 /path/to/english.200MB
```

The *enc\_patt* and *enc\_set* can be generated by running `etdc_tool` executabe:
```shell
etdc_tool [path/to/text/set] [pnumber]
```

where:
* path/to/text/set - is a path to corpus (file previousely processed with `etdc_parse_text.py` script)
* pnumber - is a number of patterns to be generated

The program generates following files:
* [text\_filename].processed.dict - dictionary
* [text\_filename].processed.etdc.bin - encoded set
* [text\_filename].processed.[p_number].[m].bin - encoded patterns
* [text\_filename].processed.[p_number].[m].txt - patterns in plain text


The file `[text_filename].processed` should be generated with for example script `etdc_parse_text.py`:
```shell
python etdc\_parse\_text.py -c english.200MB
```

### Quick Steps

1. Compile source codes (see Compilation section)
2. Parse the input file
	2.1. Replace set_loc value in file `etdc_parse_text.py` so it points to location where the sets are stored (e.g. *english.200MB*)
	2.2. Execute `etdc_parse_text.py` (see Running section)
3. Encode the text file and generate patterns
	3.1. Execute `etdc_tool` (see Running section)
4. Execute tests
	4.1. Replace parameters in test script `etdc_test.py`
		4.1.1. set_loc - location of files generated by `etdc_tool`
		4.1.2. alg_loc - location of executables
	4.2. Execute the tests (see Testing section)

## Testing

There is a python script that helps in testing the performance of given algorithms.
The script downloads automaticaly Pizza&Chilli corpus and generates the patterns, etc.

To execute a test run following command:

```shell
usage: etdc_test.py [-h] [-r R] [-a A] [-c C] [-m M] [-u U] [-k K] [-q Q] [-s S] [-d D]

optional arguments:
  -h, --help           show this help message and exit
  -r R, --npatterns R  number of patterns
  -a A, --algorithm A  algorithm[s] to be tested
  -c C, --corpus C     corpus
  -m M, --length M     pattern length[s] (e.g. 8,16,32)
  -u U, --faosou U     FAOSO parameter U
  -k K, --faosok K     FAOSO parameter k
  -q Q, --q-gram Q     q-gram size
  -s S, --sigma S      dest. alph. size
  -d D, --denom D      denominator (e.g. 100,1000)
```

Example: 
```shell
python3 etdc_test.py -a etdc_mag,etdc_mag_l2 -c english.100MB -r 100,1000 -m 8,32 -q 2,3,4,5,6,7,8,9,10 -s 5 -u 4 -k 2 -d 100,10000,1000000
```


*The above script may execute algorithms with incorrect parameters (the correctness only depends on you), and thus generate some errors in the output which can be ignored.*




## Docker

The simplest way you can test the algorithm is by using docker. All you need to do is to:

* Clone the git repository:
```shell
git clone https://github.com/rsusik/magetdc magetdc
cd magetdc
```

* Build the image:
```shell
docker build -t magetdc .
```

* Or pull from repository:
```
docker pull rsusik/magetdc
docker tag docker.io/rsusik/magetdc magetdc
```

* Run container:
```shell
docker run --rm magetdc
```

* Additionally you may add parameters (as mentioned in Testing section):
```shell
docker run --rm magetdc -c english.100MB -m 16 -r 100
```


## Authors

* Robert Susik
* Szymon Grabowski
* Kimmo Fredriksson
