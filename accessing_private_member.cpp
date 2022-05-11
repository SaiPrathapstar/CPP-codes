#include<iostream>
using namespace std;
class marks{
	private:
	int marks1,marks2;
	public:
		void getdata()
		{
			cout<<"\nEnter marks1 : "<<endl;
			cin>>marks1;
			cout<<"Enter marks2 : "<<endl;
			cin>>marks2;
		}
		void avg()
		{
			cout<<"Average marks are : "<<(marks1+marks2)/2<<endl;
		}
	int pass()
	{
		return marks1;
	}
	};
int main()
	{
		marks prathap;
		prathap.getdata();
		prathap.avg();
	    cout<<"Got marks from a private class member"<<endl<<prathap.pass();
		return 0;
		}	
