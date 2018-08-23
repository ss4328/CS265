#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

//not the best way but works for out purpose
int randomInteger(int min, int max) {
	int range = max - min + 1;
	int num = rand() % range + min;

	return num;

}

//print the arrays
void printArray(vector<int> arr, vector<int> arr2) {
	cout << "array: "  << arr.size() << endl;
	for (int x = 0; x<sizeof(arr); x++) {
		cout << arr[x] << endl;
	}

	cout << "output: " << endl;
	for (int x = 0; x<sizeof(arr2); x++) {
		cout << arr2[x] << endl;
	}
}


void swap(vector<int> arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

//the python code for reference
//didn't work out -_-
/*
void quicksort(vector<int> arr, int first_index, int last_index)
{
	if ((last_index - first_index) < 2){
		cout << "Passed array too small";
	}
	else {
		int randomInt = randomInteger(0, last_index);
		swap(arr, first_index, randomInt);

		int last = first_index + 1;
		for (int x = first_index + 1; first_index < last_index; x++){
			if (arr[x] < arr[first_index]) {
				swap(arr, last, x);
				last = last + 1;
			}
		}
	swap(arr, first_index, last - 1);
	quicksort(arr, first_index, last - 1);
	quicksort(arr, last, last_index);
	//return arr;
	}
}
*/
int partition(vector<int> & arr, int low, int high)
{
	int pivot = arr[high];    
	int i = (low - 1);  //the smaller partition is till low -1

	for (int j = low; j <= high - 1; j++)
	{
		//check for the pibot position relative to smaller element
		if (arr[j] <= pivot)
		{
			i++;    // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);	//swap the elements
	return (i + 1);

}
void quickSort(vector<int> & arr, int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);	//partioning index

		quickSort(arr, low, pi - 1);	//sort 1st half
		quickSort(arr, pi + 1, high);	//sort the other half
	}
}




int main()
{
	//example test code
	/*vector<int> a{ 1, 3, 2, 6, 4, 5, 8, 7, 9, 0 };
	quickSort(a, 0, a.size() - 1);
	for (int x = 0; x < a.size(); x++) {
		
		cout<<a[x]<<endl;
	}*/

	for (int x = 0; x <= 9; x++) {
		cout << "Array serial: " <<x << endl;
		int noOfElements = randomInteger(10, 20);
		cout << "no. of elem: " << noOfElements << endl;

		vector<int> newArr;
		//vector<int> newArr2(noOfElements);
		vector<int> output;

		for (int i = 0; i <= noOfElements; i++) {
			newArr.push_back(randomInteger(0, 100));	//add random integers to the vector
		}

		output = newArr;

		quickSort(output, 0, output.size() - 1);

		cout << "array: " << newArr.size() << endl;
		for (int x = 0; x< newArr.size(); x++) {
			cout << newArr[x] << endl;
		}

		cout << "output: " << endl;
		for (int x = 0; x< output.size(); x++) {
			cout << output[x] << endl;
		}

		//releasing the memory
		output.clear();
		newArr.clear();
	}
	return 0;
}


