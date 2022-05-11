#include<iostream>
using namespace std;
void rev( int length , int arr[] )
{
	for ( int i = 0 ; i < length/2 ; i++ )
	{
		int temp = arr[i];
		int endindex = length - 1 - i;
		arr[i] = arr[endindex];
		arr[endindex] = temp;
	}
	cout<<"\nEntered Array is reversed\n";
}
int main()
{
	int n;
	int *arr= new int[10];
	cout<<"How many elements do you want to enter into the array";
	cin>>n;
	cout<<"Enter "<<n<<" elements one by one";
	for( int i =0 ; i< n ; i++ )
	{
	cin>>arr[i];	
	}
	rev( n , arr );
	cout<<"The reversed array is : ";
	for ( int i = 0; i< n; i++ )
	{
		if( i < 4 )
	cout<<*(arr + i)<<" , ";
	else
	cout<<*(arr+i)<<".";
}
}
/*This program can also be done by copying the original array into another array and assigning the n-i th term of duplicate to
i th term of original array*/
