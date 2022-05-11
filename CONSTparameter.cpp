#include<iostream>
using namespace std;
int area( const int &x , const int &y )
{
	cout<<"Area of the given two dimension Geometry is : "<<x*y;
}
int main()
{
	int x , y;
	cout<<"Enter length and breadth of the geometry  ";
	cin>>x>>y;
	area( x , y );
}
