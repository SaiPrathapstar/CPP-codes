#include<iostream>
using namespace std;
const int MAX = 10;
int main()
{
	int arr[MAX] ={10};
	int *xPtr = arr;
	int *yPtr = arr + MAX - 1;
	cout<< * xPtr << "  "  <<* yPtr;
	return 0;
}
