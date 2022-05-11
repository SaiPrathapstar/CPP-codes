#include<iostream>
using namespace std;
class Point{
	public:
	double x,y;
	void print()
	{
		cout<<"( "<<x<<" , "<<y<<" )";
	}
};
class Vector{
	public:
	Point Start,End;
	void print()
	{
		Start.print();
		cout<<"-->";
		End.print();
		cout<<endl;
	}
};
int main()
{
	Vector vec;
	vec.Start.x = 1.0;
	vec.End.x = 2;
	vec.Start.y = 3;
	vec.End.y = 4;
	Vector vec2;
	vec2.Start = vec.Start;
	vec2.End.x=12;
	vec2.End.y=13;
	vec.print();
	vec2.print();
	}
