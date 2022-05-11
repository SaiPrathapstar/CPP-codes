#include<iostream>
using namespace std;
template<class T>
T sum ( T a , T b )
{
	return a+b;
}
int main()
{
	cout<<sum(1,2)<<endl;
	cout<<sum(1.4,2.5)<<endl;
	cout<<sum<int>(1,2)<<endl;
	cout<<sum<float>(1.4,2.5)<<endl;
}
