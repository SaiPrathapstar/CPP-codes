#include<iostream>
using namespace std;
class Int{
	public:
		int *data;
		int size;
		Int(int size)
		{
			data = new int[size];
			this->size=size;
		}
};
int main()
{
	Int a(2);
	a.data[0]=4;
	a.data[1]=2;
	Int b = a;
	delete[] &a;
	cout<<a.data[0]<<endl;
}
