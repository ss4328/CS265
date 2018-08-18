#include <iostream>
using namespace std;

int main()
{
	int A=7;
	A=A+1;
	cout << "Value of A is: " << A <<endl;
	cout <<"Memory location of A is: "<< &(A) << endl;
	//int B[10];
	int * B = new int[10];
	//delete[] B;
	cout << "B= "<<	B <<endl;
	cout <<"Address of B is: " << &(B)<<endl;
	for(int i=0; i<10; i++)
	{
		cout << "B[" <<i << "] = " << B[i]<<endl;
		cout << "Address of B["<<i<<"] is: "<< &(B[i]) <<endl;
	}

	int **M = new int * [3];
	for (int i=0;i<3;i++)
	{
		M[i] = new int[3];
		cout << "M's Mem Lcoation: "<< &(M) <<endl;
		cout << "M[" <<i<<"]= "<< M <<endl;
	

		for (int j=0; j<3; j++)
		{
			cout <<"M[" <<i <<"][" << j<< "] =" <<M[i][j] <<endl;
			cout <<"Memory: "<< &(M[i][j]) <<endl;
		}
	}
return 0;
}
