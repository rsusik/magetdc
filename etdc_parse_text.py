import sys

set_loc = '/path/to/sets'

t_args = sys.argv[1]
t_args_list	= t_args.split(',')     # text files separated by ','

for t_el in t_args_list:
	filename = set_loc + '/' + t_el
	f_in = open(filename)
	text = f_in.read()
	text = text.replace(",", " ").replace("\r", " ").replace("\n", " ").replace("\t", " ").replace(".", " . ")
	while text.find("  ") != -1:
		text = text.replace("  ", " ")
	f_out = open(filename + ".processed", "w+")
	f_out.write(text)
	f_out.close()
