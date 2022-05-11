#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"How many prime numbers do you want to print\n";
	cin>>n;
	cout<< " First "<<n<<" Prime numbers are : ";
	for( int i = 2; n > 0 ; i++ )
	{
		bool isprime = true;
		for( int j = 2; j < i ; j++ )
		{
			if( i % j == 0 )
			{		
			isprime = false;
			break;
			}
        }
	if( isprime )
	{
		cout<<"   "<<i;
		n--;
		
	}
}
}
