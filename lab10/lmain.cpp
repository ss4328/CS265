
//Mark Boady
//CS265: Drexel University 2018

#include "search.h"
#include <iostream> //cout and endl
#include <cstdlib> //atoi

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "Usage: lsearch array_size" << std::endl;
		return 1;
	}
	int size = std::atoi(argv[1]);
	std::cout << "Testing linear_search with Array of size "
		<< size
	 	<< std::endl;
	test_search(size,linear_search);
}
