#include<iostream>
using namespace std;
printArray( int arr[] )
{
	for ( int i = 0; i< 5; i++ )
	{
		if( i < 4 )
	cout<<*(arr + i)<<" , ";
	else
	cout<<*(arr+i)<<".";
}
}
int main()
{
	int arr[5]  =  { 1,2,3,4,5 };
	printArray( arr );
	for(int i=0;i<5;cout<<arr[i++]<<" ," );
}
