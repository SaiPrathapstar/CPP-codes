#include<iostream>
using namespace std;
int main()
{
	unsigned int n;
	int a=1;
	cout<<"Enter a number to find factorial";
	cin>>n;
	for( ; n>0 ; a*=n-- );
	cout<<a; 
}
