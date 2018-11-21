import sys, argparse
from pizza_chili import check_corpus_existance


set_loc = './sets'

parser = argparse.ArgumentParser(description='Corpus preprocessing script for ETDC MAG variant.',
			epilog="Example:\npython3 etdc_parse_text.py -c english.10M")
parser.add_argument("-c", "--corpus", dest='c', type=str, default='english.10MB', help="corpus")
args = parser.parse_args()

corpus_list = args.c.split(',')	 # text files separated by ','

for corpus in corpus_list:
	if not check_corpus_existance(set_loc, corpus):
		print("WARNING: Corpus was NOT found ({}). Ignoring.".format(corpus))
		continue
	filename = "{}/{}".format(set_loc, corpus)
	with open(filename, "r", encoding="iso-8859-1") as f_in, open(filename + ".processed", "w+", encoding="iso-8859-1") as f_out:
		text = f_in.read()
		text = text.replace(",", " ").replace("\r", " ").replace("\n", " ").replace("\t", " ").replace(".", " . ")
		while text.find("  ") != -1:
			text = text.replace("  ", " ")
		f_out.write(text)


