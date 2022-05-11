#include<iostream>
using namespace std;
class Point{
	public:
	int x;
	Point( int x )
	{
		this->x = x;
		cout<<"Assigned the value : "<< x <<" to X through constructor."<<endl;
	}
};
int main()
{
	Point p[2] = { Point(1) , Point(2) } ;
	cout<<"Got the values through from the array"<<p[1].x<<endl;
}
