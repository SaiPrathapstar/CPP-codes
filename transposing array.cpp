#include<iostream>
using namespace std;
int transpose( int input[3][3] )
{
	int output[3][3];
	for( int i = 0 ; i < 3 ; i++ )
	{
		for( int j  = 0 ; j < 3 ; j++ )
		output[j][i] = input[i][j];
	}
	for( int i = 0 ; i < 3 ; i++ )
	{
		for( int j  = 0 ; j < 3 ; j++ )
		{
			cout<<output[i][j]<<"\t";
		}
		cout<<endl;
	}

}
int main()
{
    int a[3][3];
	int i , j;
	cout<<"Enter the elements of 3x3 matrix on by one : ";
	for(  i =0 ; i < 3 ; i++ )
	{
		for( j = 0 ; j < 3 ; j++ )
		{
			cin>>a[i][j];
		}
	}
	transpose( a );
}
