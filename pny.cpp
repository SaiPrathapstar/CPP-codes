#include<iostream>
using namespace std;
int set( int **pter )
{
	*pter = 5;
}
int main()
{
	int *p;
	set(&p);
	cout<<p<<endl;
}
