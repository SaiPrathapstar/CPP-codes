/*This is a program (Inside the class) on the view of LHS of the operator*/ 
#include<iostream>
using namespace std;
class Complex{
	int real , imag;
	public:
		Complex()
		{
			real = 0;
			imag = 0;
		}
		Complex( int r , int i ) : real(r),imag(i)	{}
		void Print()
		{
			cout<<real<<" + "<<imag<<" i"<<endl;
		}
		Complex operator + ( Complex c )  //return type is complex here in line 16 and the parameter of this function are 
		{                                //of type complex.
			Complex temp;               //c1 is the inner object and c2 is passed object real refers to the real part of c1 and c.real refers to the real part of c(i.e,c2)
			temp.real = real + c.real; //real and imag are the variables of c1 because they are called from the c1 (When written c1+c2)
			temp.imag = imag + c.imag;//temp is just used to stroe the added values
			return temp;              //We are returning the complex temp
		}
		Complex add( Complex c )//This is a function demonstarting the working of the above special function
		{                      //The same thing will happen when c1+c2 is called
			Complex temp;     //c1+c2 is same as c1.add(c2) 
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			return temp;
		}
};
int main()
{
	Complex c1(1,2);
	Complex c2(2,4);
	Complex c3;
	c3 = c1 + c2;              //Line 36 and 38 are same in the sense to compiler
	Complex c3add;
	c3add = c1.add(c2);
	c3.Print();
	c3add.Print();
	Complex c4 = c1 + c2 + c3;
	c4.Print();
	return 0;
}
