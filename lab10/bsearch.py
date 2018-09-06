#Mark Boady
#CS265: Drexel University 2018

import sys
from search import *
if len(sys.argv)!=2:
	print("Usage: python3 bsearch.py array_size")
	sys.exit(1)
size = int(sys.argv[1])
print("Testing binary_search with Array of size",size)
test_search(size,binary_search)
