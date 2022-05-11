#include<iostream>
using namespace std;
int main()
{
    int i,j,k,sum = 0;
    int b[3][3];
    int a[3][3][3];
    cout<<"Enter First Matrix : ";
    for( i = 0 ; i < 3 ; i++)
    for( j = 0 ; j < 3 ; j++)
    cin>>a[0][i][j];
    cout<<"Enter Second Matrix : ";
    for( i = 0 ; i < 3 ; i++)
    for( j = 0 ; j < 3 ; j++)
    cin>>a[1][i][j];
    cout<<"Enter Third Matrix : ";
    for( i = 0 ; i < 3 ; i++)
    for( j = 0 ; j < 3 ; j++)
    cin>>a[2][i][j];
    for(int i = 0 ; i < 3 ; i++)
    {
    for(j = 0 ; j < 3 ; j++)
    {
    for(k = 0 ; k < 3 ; k++)
    {
        sum = sum + a[0][i][k]*a[1][k][j];
    }
    b[i][j] = sum;
    sum = 0;
    }
    }
    for( i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            b[i][j] += a[1][i][j];
        }
    }
    cout<<"The Product of first two matrices and sum of last matrix is : \n";
    for(i = 0 ; i < 3 ; i++)
    {
        for( j = 0 ; j < 3 ; j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
}
