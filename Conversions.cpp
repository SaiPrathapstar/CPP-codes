#include<iostream>
using namespace std;
int powe(int base , int n)
{
	int p = 1;
	for(int i = 1 ; i <= n ; i++)
	{
		p = base*p;
	}
	return p;
}
void DecTo(int num , int base)
{
    int a[50] , i = 0;
    cout<<"The number "<<num<<" in base "<<base<<" is : ";
    int n = num;
    while( n >= 1)
    {
        a[i] = n%base;
        i++;
        n = n/base;
    }
    i = i - 1;
    for(int j = i ; j >= 0 ; j--)
    {
    	if(a[j] == 10)
    	cout<<"A ";
    	else if(a[j] == 11)
    	cout<<"B ";
    	else if(a[j] == 12)
    	cout<<"C ";
    	else if(a[j] == 13)
    	cout<<"D ";
    	else if(a[j] == 14)
    	cout<<"E ";
    	else if(a[j] == 15)
    	cout<<"F ";
    	else
    	cout<<a[j]<<" ";
	}
}
int ToDec(int num , int base )
{
	int n = num;
	int i = 0 , a[50];
	while(n>0)
	{
		a[i] = n%10 ;
		i++;
		n = n/10; 
	}
	i = i - 1;
	int sum = 0;
	for( int j = 0 ; j <= i ; j++)
	{
		sum = sum + a[j]*powe(base , j);
	}
	cout<<"The decimal number is : "<<sum<<endl;
	return sum;
}
int main()
{
    int num1 , num2;
    int base1 , base2;
    cout<<"Enter the base of the number : ";
    cin>>base1;
    cout<<"Enter the Number : ";
    cin>>num1;
    int check = num1;
    while(check > 0)
    {
    if(check%10 >= base1)
    {
    	cout<<"A "<<base1<<"-ary number cannot contain : "<<check%10<<endl;
    	cout<<"Please try agian...";
    	return 0;
	}
	check = check/10;
	}
    cout<<"Enter the base to which you want to convert :  ";
    cin>>base2;
    cout<<"Converting from base : "<<base1<<" to base : "<<base2<<endl;
    if( (base1 != base2) && base1 == 10 )
    {
    	DecTo(num1 , base2);
	}
	else if((base1 != base2) && base1!=10 && base2!=10)
	{
		int	x = ToDec(num1,base1);
		DecTo(x,base2);
	}
	else if( ( base1 != base2 ) && base1!=10 && base2 == 10 )
	{
	    ToDec(num1 , base1);
	}
	else if(base1 == base2)
	{
		cout<<"Converting from base "<<base1<<" to "<<base2<<" does nothing!"<<endl;
	}
	else
	{
		cout<<"Not able to convert!"<<endl;
	}
	return 0;
}
