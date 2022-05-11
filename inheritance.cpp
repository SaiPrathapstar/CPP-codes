#include<iostream>
#include<string.h>
using namespace std;
class Vehicle{
	public : 
	int year;
	string license;
	public : 
	Vehicle( const string mylicense , const int myyear ) : year(myyear) , license(mylicense)	{	}
	virtual run()
	{
		cout<<"Running the Vehicle";
	}
};
class car : public Vehicle
{
	public:
	string Model;
	car ( string clicense , int cyear , string cModel )
	: Vehicle ( clicense , cyear ) , Model( cModel ) { }
    virtual  run()
	{
		cout<<"Running "<<Model;
	}
};
int main()
{
	car Maruti800 ( "Valid License" , 2020 , " Maruti Suzuki 800 " );
	Vehicle *v = &Maruti800;
	v->run();
}
