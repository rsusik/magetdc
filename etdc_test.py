import subprocess, sys, os, platform

set_loc = '/path/to/sets'
alg_loc = '/path/to/algs'

args_num = len(sys.argv) - 1
curr_path = os.getcwd()

arg_offset = 0

# Error
if args_num < 1:
    print >> sys.stderr, "Error not enought parameters. See --help."
    exit()

if sys.argv[1]=='--help':
	print 'Pattern matching tester help.'
	print ''
	print 'Syntax:'
	print 'test [--help] algorithm[.exe] test_set r m u k q-size sigma'
	print ''
	print '--help      Shows the help'
	print 'algorithm   Algorithm(eg. cf,fso)'
	print 'test_set    Test set(eg. english.100MB)'
	print 'r           Pattern number(eg. 1000)'
	print 'm           Pattern length(eg. 8)'
	print 'u           U parameter(eg. 8)'
	print 'k           K parameter(eg. 2)'
	print 'q           q-gram size'
	print 'sig         alph size'
	print 'denom       denom'
	print ''
	print 'Example:'
	print 'etdc_test.py etdc_mag.exe english.200MB 100,1000 8,16,32,64 8 1,2 2,3,4,5,6,7,8,9,10 4,15 1000000'
	print ''
	exit()

# Error
if args_num < 7:
    print >> sys.stderr, "Error not enought parameters. See --help."
    exit()

# algorithm
algs      = sys.argv[1] # algorithms
# arguments:
set_args  = sys.argv[2] # test text sets
r_args    = sys.argv[3] # pattern length
m_args    = sys.argv[4] # pattern length
u_args    = sys.argv[5] # U
k_args    = sys.argv[6] # K
q_args    = sys.argv[7] # Q
sig_args  = sys.argv[8] # Sigma
denom_args= sys.argv[9] # denominator

set_args_list    = set_args.split(',')
a_args_list      = algs.split(',')
r_args_list      = r_args.split(',')
m_args_list      = m_args.split(',')
u_args_list      = u_args.split(',')
k_args_list      = k_args.split(',')
q_list           = q_args.split(',')
sig_list         = sig_args.split(',')
denom_args_list  = denom_args.split(',')

print 'Starting calculation for following parameters'
print 'Sets         : ' + set_args
print 'M            : ' + m_args
print 'U            : ' + u_args
print 'K            : ' + k_args
print 'Q-Size       : ' + q_args
print 'Sigma        : ' + sig_args
print 'Denom        : ' + denom_args


print 'Alg\t' + 'Set\t' + '#Patt\t' + 'Q\t' + 'M\t' + 'U\t' + 'k\t' + 'Sig\t' + 'Sig^Q\t' + 'PattBytes\t' + 'Denom\t' + 'Offset\t' + 'enc_txt_size\t' + 'proc_txt_size\t' + 'dict_size\t' + 'idx_size\t' + 'map_size(RAM)\t' + 'all_space/enc_txt_size\t' + 'all_space/proc_txt_size\t' + '#verif\t' + '#while_loops\t' + 'Matches\t' + 'acc[s]\t' + 'pre[s]\t' + 'search[s]\t' + 'pre+search[s]\t' + 'Search[MB/s]\t' + 'Pre+Search[MB/s]\t' + 'P+S/Patt[MB/s]'
for a in a_args_list:
	for sig in sig_list:
		for q in q_list:
			for s in set_args_list:
				for r in r_args_list:
					for m in m_args_list:
						for u in u_args_list:
							for k in k_args_list:
								for denom in denom_args_list:
									proc_filename    = alg_loc + '/' + a 
									pattern_filename = set_loc + '/' + s + '.processed.' + r + '.' + m + '.patt.bin'
									set_filename     = set_loc + '/' + s + '.processed.etdc.bin'
									set_orig_filename= set_loc + '/' + s 
									if not os.path.isfile(proc_filename):
										print "Error: The prog file not found ( "+proc_filename+")"
										exit()
									if not os.path.isfile(pattern_filename):
										print "Error: The pattern file not found ( "+pattern_filename+")"
										exit()
									if not os.path.isfile(set_filename):
										print "Error: The set file not found ( "+set_filename+")"
										exit()
									#print proc_filename, pattern_filename, m, set_filename, u, k, q, sig, denom, set_orig_filename
									proc = subprocess.Popen([proc_filename, pattern_filename, m, set_filename, u, k, q, sig, denom, set_orig_filename], stdout=subprocess.PIPE)
									output = proc.stdout.read()
									output = a + '\t' + s + '\t' + r + '\t' + q + '\t' + m + '\t' + u + '\t' + k + '\t' + output;
									sys.stdout.write(output)
									sys.stdout.flush()

