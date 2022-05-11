#include<iostream>
using namespace std;
template<class T>    /*can also be written as template<typename T> */
class Sum{
	public:
	Sum( T a , T b )
	{
		cout<<a+b;
	}
};
int main()
{
	Sum <int>p(3,4); /*For class templates <datatype> must be there. It is used to say what will be stored in "T"*/ 
}
