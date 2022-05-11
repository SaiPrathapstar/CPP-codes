#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int count = 0;
	string c;
	cout<<"Enter a String : ";
	cin>>c;
	while( c[count] != '\0' )
	{
		count++;
	}
	cout<<"Length of the entered string is : "<<count<<endl;
}
