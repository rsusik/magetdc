import subprocess, sys, os, platform, argparse, gzip, shutil
from urllib.request import urlopen

pizza_corpus = {
	'proteins.50MB': 'http://pizzachili.dcc.uchile.cl/texts/protein/proteins.50MB.gz',
	'proteins.100MB': 'http://pizzachili.dcc.uchile.cl/texts/protein/proteins.100MB.gz',
	'proteins.200MB': 'http://pizzachili.dcc.uchile.cl/texts/protein/proteins.200MB.gz',
	'sources.50MB': 'http://pizzachili.dcc.uchile.cl/texts/code/sources.50MB.gz',
	'sources.100MB': 'http://pizzachili.dcc.uchile.cl/texts/code/sources.100MB.gz',
	'sources.200MB': 'http://pizzachili.dcc.uchile.cl/texts/code/sources.200MB.gz',
	'dna.50MB': 'http://pizzachili.dcc.uchile.cl/texts/dna/dna.50MB.gz',
	'dna.100MB': 'http://pizzachili.dcc.uchile.cl/texts/dna/dna.100MB.gz',
	'dna.200MB': 'http://pizzachili.dcc.uchile.cl/texts/dna/dna.200MB.gz',
	'english.50MB': 'http://pizzachili.dcc.uchile.cl/texts/nlang/english.50MB.gz',
	'english.100MB': 'http://pizzachili.dcc.uchile.cl/texts/nlang/english.100MB.gz',
	'english.200MB': 'http://pizzachili.dcc.uchile.cl/texts/nlang/english.200MB.gz',
	'english.1024MB':'http://pizzachili.dcc.uchile.cl/texts/nlang/english.1024MB.gz',
	'xml.50MB': 'http://pizzachili.dcc.uchile.cl/texts/xml/dblp.xml.50MB.gz',
	'xml.100MB': 'http://pizzachili.dcc.uchile.cl/texts/xml/dblp.xml.100MB.gz',
	'xml.200MB': 'http://pizzachili.dcc.uchile.cl/texts/xml/dblp.xml.200MB.gz',
}



def check_corpus_existance(c_dir, c):
	filename = "{}/{}".format(c_dir, c)
	if os.path.isfile(filename):
		return True
	if c not in pizza_corpus:
		return False
	print("Warning: Corpus does NOT exists. Trying to download (it may take a while).")
	sys.stdout.flush()
	url = pizza_corpus[c]
	with urlopen(url) as ret:
		if ret.code != 200:
			return False
	gz_filename = "{}.gz".format(filename)
	with urlopen(url) as response, open(gz_filename, 'wb') as gz_file:
		shutil.copyfileobj(response, gz_file)
	if os.path.isfile(gz_filename):
		with gzip.open(gz_filename, 'rb') as gz_file, open(filename, 'wb') as dest_file:
			dest_file.write(gz_file.read())
		if os.path.isfile(filename):
			os.remove(gz_filename)
			return True
	return False