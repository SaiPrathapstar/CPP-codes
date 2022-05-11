#include<iostream>
using namespace std;
int print(  char * msg , int i = 1 )
{
	for( int j = 0 ; j < i ; j++ )
	cout<<msg<<endl;
}
int main()
{
	print( "Default function is printed if you want to change i in function def pass the desired value" );
}
