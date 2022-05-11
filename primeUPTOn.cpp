#include<iostream>
using namespace std;
int main()
{
	int i,n,count=0;
	cout<<"Enter the number to print prime numbers\n";
	cin>>n;
	cout<<"Prime numbers upto "<<n<<" are : ";
	for(i=1;i<=n;i++){
	for( int j=1;j<=i;j++ ){
	if(i%j==0){
	count++;}}
	if(count==2)
	cout<<i<<"   ";
	count=0;
	}
}
