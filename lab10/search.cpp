
//Mark Boady
//CS265: Drexel University 2018
//Implementation of search.h

#include "search.h"
#include <iostream> //cout and endl

int* make_array(int size)
{
	int* A = new int[size];
	for(int i=0; i < size; i++)
	{
		A[i] = i;
	}
	return A;
}

bool binary_search(int target, int* A, int start, int stop)
{
	if(start > stop)
	{
		return false;
	}
	int middle = start+(stop-start)/2;
	if(A[middle]==target)
	{
		return true;
	}
	if(A[middle] > target)
	{
		return binary_search(target,A,start,middle-1);
	}
	return binary_search(target,A,middle+1,stop);
}


bool linear_search(int target, int* A, int start, int stop)
{
	for(int i=start; i <= stop; i++)
	{
		if(A[i]==target)
		{
			return true;
		}
		if(target < A[i])
		{
			return false;
		}
	}
	return false;
}

void test_search(int size, bool (*search)(int, int*, int, int))
{
	//Generate Array
	int* array = make_array(size);
	//Search for every number in Array
	//It should fail 20 times and succeed rest
	int found=0;
	int failed=0;
	//Planned failures
	int planned=size/10;
	for(int i=-1*planned; i < planned+size; i++)
	{
		if(search(i,array,0,size-1))
		{
			found++;
		}else
		{
			failed++;
		}
	}
	int tests = found+failed;
	std::cout << "Ran " << tests << " tests." << std::endl;
	std::cout << "Found " << found << " out of " << size << " targets." << std::endl;
	std::cout << "Missing " << failed << " out of " << 2*planned << " targets." << std::endl;
	std::cout << "Found Success Rate: "
		<< (static_cast<double>(found)/static_cast<double>(size))*100
		<< "%" << std::endl;
	std::cout << "Missing Success Rate: "
		<< (static_cast<double>(failed)/static_cast<double>(2*planned))*100
		<< "%" << std::endl;
}
