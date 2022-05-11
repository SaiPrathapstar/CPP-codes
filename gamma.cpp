#include<iostream>
#include<math.h>
using namespace std;
long double gammap( double n)
{
	long double pi = 1.7724538509;
	
	if(n == 0.5)
	return pi;
	
	else if(n == 1 || n == 0)
	return 1;
	
	else
	return(n * gammap(n-1));
}
long double gamman(double n)
{
	long double pi = 1.7724538509;
	if(n == 0.5)
	return pi;
	
	else if(n == 1 || n == 0)
	return 1;
	
	else
	return(gamman(n+1) / (n+1) );
}
int main()
{
	double n;
	cout<<"Enter a number to find the gamma of it : ";
	cin>>n;
	if(n>=0)
	cout<<"The gamma of "<<n<<" is : "<<(long double)gammap(n);
	else
	cout<<"The gamma of "<<n<<" i s: "<<(long double)gamman(n);
	return 0;
}
