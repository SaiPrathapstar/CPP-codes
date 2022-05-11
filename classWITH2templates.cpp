#include<iostream>
using namespace std;
template <typename T , class U>
class Sum{
	public:
		Sum( T a , U b )
		{
			cout<<a+b<<endl;
		}
};
int main()
{
	Sum <int , float>p(1,2.3);      /* This is wrong --> Sum p<int , float>(1,2.5);*/
}
