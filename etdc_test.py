import subprocess, sys, os, platform, argparse
from pizza_chili import check_corpus_existance

set_loc = './sets'
alg_loc = '.'

curr_path = os.getcwd()


parser = argparse.ArgumentParser(description='MAG testing script.',
                epilog="Example:\npython3 etdc_test.py -a etdc_mag -c english.10MB -r 100 -m 8,32 -q 2 -s 5 -u 4 -k 2 -d 1000000")
parser.add_argument("-r", "--npatterns", dest='r', type=str, default='100', help="number of patterns")
parser.add_argument("-a", "--algorithm", dest='a', type=str, default='etdc_mag_l2', help="algorithm[s] to be tested")
parser.add_argument("-c", "--corpus", dest='c', type=str, default='english.10MB', help="corpus")
parser.add_argument("-m", "--length", dest='m', type=str, default='8,16,32,64', help="pattern length[s] (e.g. 8,16,32)")
parser.add_argument("-u", "--faosou", dest='u', type=str, default='4', help="FAOSO parameter U")
parser.add_argument("-k", "--faosok", dest='k', type=str, default='2', help="FAOSO parameter k")
parser.add_argument("-q", "--q-gram", dest='q', type=str, default='2', help="q-gram size")
parser.add_argument("-s", "--sigma", dest='s', type=str, default='4', help="dest. alph. size")
parser.add_argument("-d", "--denom", dest='d', type=str, default='1000000', help="denominator (e.g. 100,1000)")

args = parser.parse_args()

set_args_list    = args.c.split(',')
a_args_list      = args.a.split(',')
r_args_list      = args.r.split(',')
m_args_list      = args.m.split(',')
u_args_list      = args.u.split(',')
k_args_list      = args.k.split(',')
q_list           = args.q.split(',')
sig_list         = args.s.split(',')
denom_args_list  = args.d.split(',')


def get_patt_filename(set_loc, c, r, m):
	return "{}/{}.processed.{}.{}.patt.bin".format(set_loc, c, r, m)

# check if everything is set up
for c in set_args_list:
	if check_corpus_existance(set_loc, c) == False:
		print("ERROR: corpus {} does NOT exists".format(c))
		exit(100)

	if not os.path.exists("{}/{}.processed".format(set_loc, c)):
		print("WARNING: Processing corpus for ETDC ({})".format(c))
		proc = subprocess.Popen(["python3", "etdc_parse_text.py", "-c", c], stdout=subprocess.PIPE)
		output = proc.stdout.read()
		print(output.decode('ascii'))


# generate missing patterns
for c in set_args_list:
	for r in r_args_list:
		for m in m_args_list:
			p_filename = get_patt_filename(set_loc, c, r, m)
			if not os.path.exists(p_filename):
				print("WARNING: File with patterns doesn't exist, generating for corpus:{} r:{}.".format(c, r))
				proc = subprocess.Popen(["./etdc_tool", "{}/{}".format(set_loc, c), r], stdout=subprocess.PIPE)
				output = proc.stdout.read()
				print(output.decode('ascii'))

# check is patterns are correctly generated
for c in set_args_list:
	for r in r_args_list:
		for m in m_args_list:
			p_filename = get_patt_filename(set_loc, c, r, m)
			if not os.path.exists(p_filename):
				print("ERROR: File with patterns doesn't exist (corpus:{} r:{} m:{})".format(c, r, m))
				exit(100)


print("\n        .....STARTING TEST.....\n")

print('Alg\tSet\t#Patt\tQ\tM\tU\tk\tSig\tSig^Q\tPattBytes\tDenom\tOffset\tenc_txt_size\tproc_txt_size\tdict_size\tidx_size\tmap_size(RAM)\tall_space/enc_txt_size\tall_space/proc_txt_size\t#verif\t#while_loops\tMatches\tacc[s]\tpre[s]\tsearch[s]\tpre+search[s]\tSearch[MB/s]\tPre+Search[MB/s]\tP+S/Patt[MB/s]')
for a in a_args_list:
	for sig in sig_list:
		for q in q_list:
			for s in set_args_list:
				for r in r_args_list:
					for m in m_args_list:
						for u in u_args_list:
							for k in k_args_list:
								for denom in denom_args_list:
									proc_filename    = "{}/{}".format(alg_loc, a)
									pattern_filename = "{}/{}.processed.{}.{}.patt.bin".format(set_loc, s, r, m)
									set_filename     = "{}/{}.processed.etdc.bin".format(set_loc, s)
									set_orig_filename= "{}/{}".format(set_loc, s)
									if not os.path.isfile(proc_filename):
										print("Error: The prog file not found ({})".format(proc_filename))
										exit()
									if not os.path.isfile(pattern_filename):
										print("Error: The pattern file not found ({})".format(pattern_filename))
										exit()
									if not os.path.isfile(set_filename):
										print("Error: The set file not found ({})".format(set_filename))
										exit()
									proc = subprocess.Popen([proc_filename, pattern_filename, m, set_filename, u, k, q, sig, denom, set_orig_filename], stdout=subprocess.PIPE)
									output = proc.stdout.read()
									output = "{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}".format(a, s, r, q, m, u, k, output.decode('ascii'))
									sys.stdout.write(output)
									sys.stdout.flush()

