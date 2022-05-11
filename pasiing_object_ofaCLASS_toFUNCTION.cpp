#include<iostream>
using namespace std;
class marks{
	public:
	int marks1,marks2;
	};
	void avg( marks s )
	{
		cout<<"Average marks are : "<<(s.marks1+s.marks2)/2;
	}
int main()
{
	marks prathap;
	prathap.marks1=12;
	prathap.marks2=12;
	avg(prathap);	
}
