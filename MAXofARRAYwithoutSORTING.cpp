#include<iostream>
using namespace std;
int main()
{
	int max;
	int a[10];
	cout<<"Enter elements one by one : ";
	for(int i =0 ; i < 10 ; i++)
	{
		cin>>a[i];
		if(i==0)
		{
			max = a[i];
		}
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	cout<<"Maximum value in the Array is : "<<max<<endl;
}
