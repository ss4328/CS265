#ifndef _SEARCH_CPP_
#define _SEARCH_CPP_
//Mark Boady
//CS265: Drexel University 2018

//Function to generate sorted array with size elements
int* make_array(int size);
//Search Array using Binary Search
bool binary_search(int target, int* A,int start, int stop);
//Search Array using Linear Search
bool linear_search(int target, int* A, int start, int stop);
//Test Function, tests a search function
void test_search(int size, bool (*search)(int, int*, int, int));
#endif
