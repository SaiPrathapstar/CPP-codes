/*This is a program (Outside of the class) on the view of the operator*/
#include<iostream>
using namespace std;
class Complex{
	public:
		int real , imag ;
		Complex()
		{
			real = 0;
			imag = 0;
		}
		Complex( int r , int i )
		{
			real = r;
			imag = i;
		}
		void Print()
		{
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
};
	Complex operator + ( Complex lhs , Complex rhs )
		{
			Complex temp;
			temp.real = lhs.real + rhs.real;
			temp.imag = lhs.imag + rhs.imag;
			return temp;
		}
int main()
{
	Complex c1(1,2);
	Complex c2(2,4);
	Complex c3 = c1 + c2;
	c3.Print();
}
