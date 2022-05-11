#include<iostream>
using namespace std;
swapusingptr( int *a , int *b )
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	cout<<"After Swapping  : a = "<<*a<<" b = "<<*b<<endl;
}
swapusingref( int &x , int &y )
{
	x = x + y;
	y = x - y;
	x = x - y;
	cout<<"After Swapping  : a = "<<x<<" b = "<<y<<endl;
}
int main()
{
	int a = 2 , b = 3;
	cout<<"Before swapping : a = "<<a<<" b = "<<b<<endl;
	swapusingptr(&a,&b);
	cout<<"Before swapping : a = "<<a<<" b = "<<b<<endl;
	swapusingref( a , b );
}
