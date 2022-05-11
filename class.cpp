#include<iostream>
#include<string.h>
using namespace std;
class Student{
	protected:
		int marks,rno;
		string  name;
		void details()
		{
			cout<<"\n\nName of the student: "<<name<<endl<<"Roll No is : "<<rno<<endl<<"Marks are : "<<marks;
		}
	rno=221;
	name="Kalakuntla Sai Prathap";
	marks=9;
	details();
};
int main()
{
	
}
