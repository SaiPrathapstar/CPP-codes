#include<iostream>
using namespace std;
template< typename T , typename U>
U sum( T a , U b )
{
	return a+b;
}
int main()
{
	cout<<sum(1,2.4)<<endl;
	cout<<sum<int , float >(1,2.4)<<endl;
	cout<<sum<float , int >(2.4,1)<<endl;
}
