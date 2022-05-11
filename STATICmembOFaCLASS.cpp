#include<iostream>
using namespace std;
class point{
	public :
		static int n;
		point()
		{
			++n;
		}
		~point()
		{
			--n;
		}
};
int point :: n = 0;
int main()
{
	point n;
	point b[5];
	cout<<"No of objects of point are : "<<point :: n<<endl;
	point *p = new point;
	cout<<"No of objects of point are : "<<point :: n<<endl;
	delete p;
	cout<<"No of objects of point are : "<<point :: n<<endl;
}
