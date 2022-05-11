#include<iostream>
using namespace std;
void drawHorizantalLine( int length )
{
	int p=1;
	while(p<=length)
	{
	cout<<"__";
	p++;
	}
}
void drawVerticalLine( int length)
{
	int p=1;
	while(p<=length)
	{
	cout<<"\n|";
	p++;
	}
}
void drawBox(int length , int breadth)
{
	int p=1,q=1;
	cout<<" ";
	if(length == 1)
	{
		for(p = 0 ; p <= length ; p++)
		cout<<"__";
	}
	else
	{
	for(p=1;p<=length;p++)
	{
		cout<<"__";
	}
    }
	for(q=1;q<breadth;q++)
	{
		cout<<"\n|";
		for(int i = 1 ; i <= length ; i++)
		{
			cout<<"  ";
		}
		cout<<"|";
	}
	cout<<"\n";
	if(q==breadth)
	{
	for(int r = 1 ; r <= length ; r++)
	{
		if( r == 1 )
		{
			cout<<"|__";
		}
		if( r == length)
		{
			cout<<"__|";
		}
		if( r != 1 && r != length )
		{
		cout<<"__";
		}
	}
	}
}
int main()
{
	drawBox(10,10);
}
