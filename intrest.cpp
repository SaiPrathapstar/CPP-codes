#include<iostream>
using namespace std;
double intrestMonth(double principle , double rate , double duration )
{
	double total = principle;
	for( int i = 0 ; i < duration ; i++ )
	{
	
    total = total + ( principle / 100 ) * rate;
    
	}
	return total;
}
double intrestEnd( double principle , double rate , double duration )
{
	double total = principle;
	for( int i = 0 ; i < duration ; i++ )
	{
	
    total = total + ( total / 100 ) * rate;
    
	}
	return total;
}
int main()
{
	double total, rate , amount , duration, principle , choice ;
	cout<<"Enter the amount taken as loan : ";
	cin>>principle;
	cout<<"Enter the interest rate in % : ";
	cin>>rate;
	cout<<"Enter duration period in months : ";
	cin>>duration;
	cout<<"How do you want to pay the interest monthly or at the end";
	cout<<"\n If you select at the end intrest for intrest amount wil also be added as per your intrest rate";
	cout<<"\n Enter 1 to select to pay the intrest monthly \n Enter 2 to pay the total amount at the end of the duration period";
	cin>>choice;
	if( choice == 1 )
	total = intrestMonth( principle , rate , duration );
	if( choice == 2 )
	total = intrestEnd( principle , rate , duration );
	cout<<"\n\n\n\nTotal amount to be paid for Rupees "<<principle<<" for duration of "<<duration<<" Months is : "<<total<<"\n\n";
}