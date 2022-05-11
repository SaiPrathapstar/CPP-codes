#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter elements one by one : ";
    for(int x = 0 ; x < n ; x++)
    cin>>*(arr + x);
    int i , j , current;
    for(i = 1 ; i < n ; i++)
    {
        j = i - 1;
        current = arr[i];
        while( arr[j]>current && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    cout<<"Soretd array is : ";
    for(int x = 0 ; x < n ; x++)
    cout<<*(arr + x)<<"\t";
}