import sys, argparse

set_loc = './sets'

parser = argparse.ArgumentParser(description='Corpus preprocessing script for ETDC MAG variant.',
			epilog="Example:\npython3 etdc_parse_text.py -c english.10MB")
parser.add_argument("-c", "--corpus", dest='c', type=str, default='english.10MB', help="corpus")
args = parser.parse_args()

t_args_list = args.c.split(',')	 # text files separated by ','

for t_el in t_args_list:
	filename = set_loc + '/' + t_el
	with open(filename, "r", encoding="utf8") as f_in, open(filename + ".processed", "w+") as f_out:
		text = f_in.read()
		text = text.replace(",", " ").replace("\r", " ").replace("\n", " ").replace("\t", " ").replace(".", " . ")
		while text.find("  ") != -1:
			text = text.replace("  ", " ")
		f_out.write(text)


