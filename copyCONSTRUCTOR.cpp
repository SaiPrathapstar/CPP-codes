#include<iostream>
using namespace std;
class Point{
	public:
	double x;
	double y;
	Point( double xn , double yn )
	{
		x=xn;
		y=yn;
		cout<<"Got the values x = "<<x<<" y = "<<y;
		cout<<" from a two parametered constructor\n";
	}
};
int main()
{
	Point q(1.0,2.0);
	Point r = q;
	r.x=5;
	cout<<q.x;
}
