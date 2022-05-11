#include<iostream>
using namespace std;
int main()
{
	float a = 5;
	cout<<a<<endl;
	int b = (int)a ;
	cout<<a<<endl;
	float y = b + 3.4;
	cout<<y<<endl;
	int c = y ;
	cout<<c<<endl;
	float x = c;
	cout<<x<<endl;
	x = y;
	cout<<x<<endl;
}
