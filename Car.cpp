#include<iostream>
using namespace std;
class Position
{
	public :
		int x,y;
		Position()
		{
			x = 0;
			y = 0;
		}
};
int main()
{
	Position car;
	int a , b;
	while(1)
	{
	int v;
	cout<<"1.Enter the direction\n2.See the location of the Car \n3.EXIT from the program\n Enter your choice : ";
	cin>>v;
	switch(v)
	{
		case 1 :
			cout<<"Enter the new coordinates to move the car Note that the car can move only one unit at a time : ";
			cin>>a>>b;
			if(a>1 || b>1)
			{
				cout<<"Wrong entry!\nThe car can move a single unit at a time please try again!\n";
			}
			else
			{
				car.x = car.x + a;
				car.y = car.y + b;
			}
			break;
		case 2:
			cout<<"The position of the car is : ( "<<car.x<<" , "<<car.y<<" )"<<endl;
			break;\
		case 3:
			return 0;
		default:
			cout<<"Invalid choice please try again!\n";
			break;
	}
    }
}
