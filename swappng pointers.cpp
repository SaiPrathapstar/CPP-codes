#include<iostream>
using namespace std;
int main()
{
	int a = 2 , b = 3;
	int *ptr1 , *ptr2;
	ptr1 = &a;
	ptr2 = &b;
	cout<<"Before Swapping  : *ptr1 = "<<*ptr1<<" *ptr2 = "<<*ptr2<<endl;
	int *temp;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	cout<<"After Swapping   : *ptr1 = "<<*ptr1<<" *ptr2 = "<<*ptr2<<endl;
}
