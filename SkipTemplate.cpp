/*This is a program to demonstrate that when one needs to skip the function template for a data type , you can easily skip 
the class or function with template for a different data type.*/
#include<iostream>
#include<cctype>
using namespace std;
template <class T>
class Sum  
  /*This class Sum cannot be used for char type so we should skip this Sum when ever we see a char data type 
    invoking it. So , we should Write this class definition another time for the char type to skip this*/
{
	public:
		T a ;
		Sum( T x  )
		{
			a = x;
		}
		T inc()
		{
			return ++a;
		}
};
template<>
class Sum<char>   
      /*We are writing Class Sum another time for char type to skip the above Sum
      Here we are writing <char> after the class name to say the compiler that this should get invoked when ever a char
	  type invokes*/ 
{
	public:
		char a;
		Sum( char x )
		{
			a = x;
		}
		char inc()
		{
			return toupper(a);
		}
};
int main()
{
	Sum <int>q(3);
	cout<<q.inc()<<endl;
	Sum <char>p('r');   /*Here we Skipped the template because Sum is defined for char datatype*/
	cout<<p.inc()<<endl;
}
