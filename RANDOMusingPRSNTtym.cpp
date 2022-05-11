#include<iostream>
#include<cstdlib> // c++ header file to use randoms like rand() , srand() , RAND_MAX  
#include<ctime> //c++ header file to get present time
using namespace std;
int main()
{
	srand( time(0) ); //set the seed, seed means the range from 0 to max,here max is set to time(0)
	// time(0) returns the present time
	int r = rand();
	cout<<"A random number is : "<<r<<endl;
	char a = rand();
	cout<<a<<endl;
	cout<<"Time is : "<<time(0);
}
