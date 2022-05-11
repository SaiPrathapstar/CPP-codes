#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cout<<"How many numbers do you want to enter :";
	cin>>n;
	cout<<"Enter elements one by one";
	cin>>a;
	int max = a;
	int min = a;
	int acc =a;
	for( int i =0; i<n-1;i++ )
	{
		acc+=a;
		cin>>a;
		if( a<min )
		min = a;
		if( a>max )
		max=a;
	}
	cout<<"Maximum of entered elements is : "<<max<<endl;
	cout<<"Minimum of entered elements is : "<<min<<endl;
	cout<<"Mean of entered elements is    : "<<(double)acc/n<<endl;
	cout<<"Range of entered elements is   : "<<(max-min)<<endl;
}
