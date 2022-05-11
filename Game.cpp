#include<iostream>
using namespace std;
int main()
{
double num;
char c;
    cout<<"Select a number in your mind.\nPress any key and press ENTER When you are done.\n";
    cin>>c;
    cout<<"Add 5 to your Number.\nPress any key and ENTER when you are done.\n";
    cin>>c;
    cout<<"Double your Number.\nPress any key and ENTER when you are done\n";
    cin>>c;
    cout<<"Now subtract 10 from it.\nPress any key and ENTER when you are done\n";
    cin>>c;
    cout<<"Enter the Number you got as the result from above process\n";
    cin>>num;
    cout<<"You selected the Number : "<<num/2;
    cout<<"\nThank You for playing the game..";
    return 0;
}