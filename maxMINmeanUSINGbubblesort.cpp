#include<iostream>
using namespace std;
int main()
{
	int n,temp,sum=0;
	double mean;
	cout<<"How many numbers do you want to enter";
	cin>>n;
	int *a = new int[n*sizeof(int)];
	cout<<"\n Enter "<<n<<" Numbers";
	for( int j = 0 ; j < n ; j++ )
	cin>>a[j];
	for( int i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	cout<<"Sum is :"<<sum<<endl;
	double sum1 = (int)sum;
	mean=sum1/n;
	for(int i = 0 ;i<n;i++ )
	{
		for(int k=0;k<n-1;k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k+1];
				a[k+1]=a[k];
				a[k]=temp;
			}
		}
	}
	cout<<"Minimum value of entered data is       : "<<a[0]<<endl;
	cout<<"Maximun value of entered data is       : "<<a[n-1]<<endl;
	cout<<"Mean of entered data is                : "<<mean<<endl;
	cout<<"Range of entered elements is           : "<<(a[n-1]-a[0])<<endl;
}
