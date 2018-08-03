#include <iostream>
using namespace std;
int main(){
	cout <<"Welcome to Matrix Multiply:"<<endl;
	cout <<"Enter the size of the Matrix: I chose 2 for now"<<endl;
	
	int ** A = new int * [5];
	for(int i=0; i<5; i++){
		A[i] = new int[5];
		cout <<"Enter value for Position" <<"A[" <<i << "]" <<endl;
	}

}
