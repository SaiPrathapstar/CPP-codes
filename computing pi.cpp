#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;
double computePI(const int n)
{
	srand(time(0));
	int darts = 0;
	for( int i = 0 ; i < n ; i++ )
	{
		double x = rand()/(double)RAND_MAX ;
		double y = rand()/(double)RAND_MAX ;
		if( sqrt(x*x+y*y) < 1 ){
			++darts;
		}
	}
	return darts / static_cast<double>(n) * 4 ;
}
int main()
{
	cout<<computePI(100)<<endl;
}
