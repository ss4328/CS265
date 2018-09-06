all: lsearch bsearch

lsearch: lmain.cpp search.o
	g++ -o lsearch lmain.cpp search.o search.java

bsearch: bmain.cpp search.o
	g++ -o bsearch bmain.cpp search.o search.java

search.o: search.h search.cpp
	g++ -c search.cpp

clean:
	rm -rf __pycache__
	rm -f search.o
	rm -f bsearch 
	rm -f lsearch
