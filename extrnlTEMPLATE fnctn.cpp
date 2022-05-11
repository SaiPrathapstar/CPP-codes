#include<iostream>
using namespace std;
template<class T>
class Int{
	public:
		T x,y;
		Int ( T u , T v ) : x(u),y(v){}
		T getX() { return x; }
		T getY();
};
template<class T>
T Int<T>::getY()
{
	return y;
}
int main()
{
	Int <float>a(1.5,2.6);
	cout<<a.getX()<<endl;
	cout<<a.getY()<<endl;
}
