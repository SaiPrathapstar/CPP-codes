#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void if0(char a )
{
	switch (a)
	{
		case '1' : 
		{
			cout<<" One Thousand ";
			break;
		}
		case '2' : 
		{
			cout<<" Two Thousand ";
			break;
		}
		case '3' : 
		{
			cout<<" Three Thousand ";
			break;
		}
		case '4' : 
		{
			cout<<" Four Thousand ";
			break;
		}
		case '5' : 
		{
			cout<<" Five Thousand ";
			break;
		}
		case '6' : 
		{
			cout<<" Six Thousand ";
			break;
		}
		case '7' : 
		{
			cout<<" Seven Thousand ";
			break;
		}
		case '8' : 
		{
			cout<<" Eigth Thousand ";
			break;
		}
		case '9' : 
		{
			cout<<" Nine Thousand ";
			break;
		}
	}
}
void if1( char a )
{
	switch (a)
	{
		case '1' : 
		{
			cout<<" One Hundered ";
			break;
		}
		case '2' : 
		{
			cout<<" Two Hundered ";
		    break;
		}
		case '3' : 
		{
			cout<<" Three Hundered ";
			break;
		}
		case '4' : 
		{
			cout<<" Four Hundered ";
			break;
		}
		case '5' : 
		{
			cout<<" Five Hundered ";
			break;
		}
		case '6' : 
		{
			cout<<" Six Hunderd ";
			break;
		}
		case '7' : 
		{
			cout<<" Seven Hundered ";
			break;
		}
		case '8' : 
		{
			cout<<" Eight Hundered ";
			break;
		}
		case '9' : 
		{
			cout<<" Nine Hundered ";
			break;
		}
	}
}
void if2( char a )
{
	switch (a)
	{
		case '2' : 
		{
			cout<<" Twenty ";
			break;
		}
		case '3' : 
		{
			cout<<" Thirty ";
			break;
		}
		case '4' : 
		{
			cout<<" Fourty ";
			break;
		}
		case '5' : 
		{
			cout<<" Fifty ";
			break;
		}
		case '6' : 
		{
			cout<<" Sixty ";
			break;
		}
		case '7' : 
		{
			cout<<" Seventy ";
			break;
		}
		case '8' : 
		{
			cout<<" Eighty ";
			break;
		}
		case '9' : 
		{
			cout<<" Ninety ";
			break;
		}
	}
}
void if3( char a )
{
	switch (a)
	{
		case '1' : 
		{
			cout<<" One ";
			break;
		}
		case '2' : 
		{
			cout<<" Two ";
			break;
		}
		case '3' : 
		{
			cout<<" Three ";
			break;
		}
		case '4' : 
		{
			cout<<" Four ";
			break;
		}
		case '5' : 
		{
			cout<<" Five ";
			break;
		}
		case '6' : 
		{
			cout<<" Six ";
			break;
		}
		case '7' : 
		{
			cout<<" Seven ";
			break;
		}
		case '8' : 
		{
			cout<<" Eight ";
			break;
		}
		case '9' : 
		{
			cout<<" Nine ";
			break;
		}
	}
}
void if3is1( char a )
{
switch (a)
	{
		case '1' : 
		{
			cout<<" Eleven ";
			break;
		}
		case '2' : 
		{
			cout<<" Twelve ";
			break;
		}
		case '3' : 
		{
			cout<<" Thirteen ";
			break;
		}
		case '4' : 
		{
			cout<<" Fourteen ";
			break;
		}
		case '5' : 
		{
			cout<<" Fifteen ";
			break;
		}
		case '6' : 
		{
			cout<<" Sixteen ";
			break;
		}
		case '7' : 
		{
			cout<<"Seventeen";
			break;
		}
		case '8' : 
		{
			cout<<" Eighteen ";
			break;
		}
		case '9' : 
		{
			cout<<" Nineteen ";
			break;
		}
	}
}
int main()
{
	char year[4];
	cout<<"Enter a year : ";
	cin>>year;
	for ( int i = 0 ; i < 4 ; i ++ )
	{
		if( i == 0 )
		if0(year[i]);
		if( i == 1 )
		if1( year[i] );
		if( i == 2 )
		{
		if( year[i] == '1' )
		{
		if3is1( year[3] );
		return 0;
        }
		else
		if2( year[i] );	
		}
		if( i == 3 )
		if3( year[i] );
	}
	return 0;
}
