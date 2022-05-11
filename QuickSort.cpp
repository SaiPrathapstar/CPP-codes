#include<iostream>
using namespace std;
void swap(int arr[] , int i , int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int Partition(int arr[] , int l , int r)
{
    int pivot = arr[r];
    int i  = l - 1;
    for(int j =  l ; j < r ; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr , i , j);
        }
    }
    swap(arr , i+1 , r );
    return i+1;
}
void QuickSort(int arr[] , int l , int r)
{
    if(l < r)
    {
        int pi = Partition(arr, l ,r);
        QuickSort(arr,l,pi-1);
        QuickSort(arr,pi+1,r);
    }
}
int main()
{
    int  k;
    cout<<"Enter the size of the array : ";
    cin>>k;
    int *arr = new int[k];
    cout<<"Enter elements one by one : ";
    for(int x = 0 ; x < k ; x++)
    {
        cin>>arr[x];
    }
    cout<<"Calling the quickSort Function "<<endl;
    QuickSort(arr,0,k-1);
    cout<<"The sorted arry is : ";
    for(int x = 0 ; x < k ; x++)
    cout<<"\t"<<arr[x];
}