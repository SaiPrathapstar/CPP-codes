#include<iostream>
using namespace std;
class marks{
	private:
	int marks1,marks2;
	public:
	void getdata()
	{
		cout<<"Enter marks 1 : "<<marks1;
		cin>>marks1;		
		cout<<"Enter marks 2 : "<<marks2;
		cin>>marks2;
		}
	friend void details(marks);
};
void details(marks s)
{
	cout<<"Marks from friend function: " <<s.marks1<<endl<<"       "<<s.marks2<<endl;
}
int main()
{
	marks prathap;
	prathap.getdata();
	details(prathap);
	}	
