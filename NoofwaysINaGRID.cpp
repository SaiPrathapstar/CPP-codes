#include<iostream>
using namespace std;
int g(int n , int m)
{
	int tot;
    cout<<"g( "<<n<<" , "<<m<<" )"<<endl;
    if(n==1 || m ==1)
    {
        return 1;
    }
    else
    {
        tot = g(n,m-1) + g(n-1,m);
    }
    return tot;
}
int main()
{
    int p,q;
    cout<<"Enter the order of the grid : ";
    cin>>p>>q;
    int no = g(p,q);
    cout<<"No of ways to reach the top left corner to the bottom right of the "<<p<<" X "<<q<<" grid is : "<<no;
}
