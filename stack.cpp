#include<iostream>
#define MAX 5
using namespace std;
int STACK[MAX],top=-1;
bool isfull()
{
	if(top==4)
	{return true; }
	return false;
}
bool isempty()
{
	if(top==-1)
	{
		return true;
	}
	return false;
}
void push( )
{
	int data;
	if(isfull())
	{
		cout<<"\n\n\nStack is Full....\n";
		}
	else
	{
		cout<<"\n\nEnter data to be inserted : \n\n"<<endl;
		cin>>data;
		top=top+1;
		STACK[top]=data;
		cout<<"\n\nEntered : "<<"into the stack.\n";
	}
}
void pop()
{
	if(isempty())
	{
		cout<<"\n\n\nThe Stack is empty...\n\n"<<endl;
	}
	else
	{	
	cout<<"\n\n\nElement on the top position removed from the stack\n";
	STACK[top]=0;
	top=top-1;
	}
}
void display()
{
	if(isempty)
	cout<<"\n\nThe stack has no elements...Try PUSHING into the stack\n\n";
	cout<<"\n\n\nThe elements of stack are...."<<endl;
	for(int i=top;i>=0;i--)
	{
		cout<<STACK[i]<<"\t";
	}
}
int main()
{
	int data,a,top=-1;
	int ch;
	while(1)
	{
	cout<<"\n\n\nSelect from the below list of options ";
	cout<<"\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT";
	cin>>a;
	if(a==1)
	push();
	if(a==2)		
	pop();
	if(a==3)
	display();
	if(a==4)
	break;
}
return 0;
}
