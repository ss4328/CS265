#include <iostream>
using namespace std;
int main(){
	cout <<"Welcome to Matrix Multiply:"<<endl;
	cout <<"Enter the size of the Matrix: "<<endl;

	int size = 0;
	cin >> size;
	
	int row = size;
	int col = size;
		
	int ** A = new int * [row];
	int ** B = new int * [row];
	int ** C = new int * [row];

	for(int i=0; i<row; i++)
	{
		A[i] = new int [size];
		B[i] = new int [size];
		C[i] = new int [size];
	}
	
	for(int i=0; i<row; i++)
	{
		for(int j=0;j<col;j++)
		{
			A[i][j] = 0; 
			cout <<"Enter value for Position " <<"A[" <<i << "]"<<"["<<j<<"]" << endl;
			cin >> A[i][j];
		}
	}
	
	 for(int i=0; i<row; i++)
        {
                for(int j=0;j<col;j++)
                {
                        B[i][j] = 0;
                        cout <<"Enter value for Position " <<"B[" <<i << "]"<<"["<<j<<"]" << endl;
                        cin >> B[i][j];
                }
        }
	

	for(int i=0; i<row; i++)
	{
		for(int j=0;j<col;j++)
		{
			
			C[i][j] = A[i][j] * B[i][j];
	//		cout<<"the values being multiplied are: "<<A[i][j]<<" and " << B[i][j]<<endl;
			cout<<" C["<<i<<"]["<<j<<"] is: "<< C[i][j] <<endl;
				
		}
	}
		
	for(int i = 0; i< row; i++)
	{
		delete [] A[i];
		delete [] B[i];
		delete [] C[i];
	}
		
}
