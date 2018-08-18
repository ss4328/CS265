#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


void findZetaSum(int x, int n)
{
//	cout<<"inside zetaSum function"<<endl;
//	cout<<"x is"<<x<<endl;
//	cout<<"n is"<<n<<endl;
        double answer = 0;
        for(int i = 1; i<= n; i++)
        {
//                cout<< answer <<endl;
		double frac = 1/((double)i);
//		cout<<"frac: "<<frac<<" i:"<<i<<"x: "<<x<<endl;
		double addition = pow(frac, x);
//		cout<<"addition:"<<addition<<endl;
                answer = answer + addition;
        }
        cout<<"Z("<<x<<") ="<<answer<<" when approximated at n= "<<n<<endl;

}
    
int main(int argc, char *argv[]){
	findZetaSum(atoi(argv[1]), atoi(argv[2]));
}               
