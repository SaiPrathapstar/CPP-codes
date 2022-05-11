#include<iostream>
#include<string.h>
using namespace std;
class mit{
	public:
		int studentID;
		char* name;
		mit(){
			studentID=0;
			name="";
		}
		mit(mit &o){
			studentID=o.studentID;
			name=strdup(o.name);
		}
};
int main()
{
	mit student1;
	student1.studentID=98;
    char n[]="foo";
    student1.name=n;
	mit student2 = student1;
	student2.name[0]='b';
	cout<<student1.name;
}
