/*This Program is not ready to use*/
#include<iostream>
int Queue[5],front = -1,rear = -1;
using namespace std;
void Enqueue()
{
	if(( front == 0 && rear == 4 ) || rear == front - 1 )
	{
		cout<<"Queue is Full.Can't insert data"<<endl;
		return;
	}
	int n;
	cout<<"Enter Element to be inserted : ";
	cin>>n;
	if(front=-1)
	{
		front = 0;
		rear = 0;
		Queue[rear] = n;
	}
	else
	{
	if( rear == 4 && front != 0 )
	{
	rear = 0;
	Queue[rear] = n;
	}
	else
	{
	rear++;
	Queue[rear] = n;
	}
	}
}
void Dequeue()
{
	if(front == -1)
	{
		cout<<"Queue is Empty"<<endl;
		return;
	}
	if( front == rear )
	{
		front = -1;
		rear = -1;
		cout<<"Now the List is empty"<<endl;
	}
	else 
	{
	if ( front == 4 )
	front = 0;
	else
	front++;
	}
	cout<<"Deleted element is : "<<Queue[front-1];
}
void Peek()
{
	cout<<"The element at front position is : "<<Queue[front]<<endl;
}
void Display()
{
	if(front == -1)
	{
		cout<<"Queue is empty"<<endl;
		return;
	}
	int f = front;
	int r = rear;
	cout<<"The Elements in the Queue are : ";
	if(f<=r)
	{
		while(f<=r)
		{
		cout<<Queue[f]<<"\t";
		f++;
		}
	}
	else
	{
		while(f<=4)
		{
			cout<<Queue[f]<<"\t";
			f++;
		}
		if(f==4)
		{
			f = 0;
			while(f<=r)
			{
				cout<<Queue[f]<<"\t";
				f++;
			}
		}
	}
	cout<<endl;
}
int main()
{
	int n;
	while(1)
	{
		cout<<"Select from the below list of options \n1.Enqueue \n2.Dequeue \n3.Display \n4.Peek \n5.EXIT";
		cout<<"\nEnter your option : ";
		cin>>n;
		switch (n)
		{
			case 1 :
				Enqueue();
				break;
			case 2 :
				Dequeue();
				break;
			case 3 :
				Display();
				break;
			case 4 :
				Peek();
				break;
			case 5 :
				exit(0);
				break;
			default :
				cout<<"Invalid choice.."<<endl;
				break;
		}
	}
	return 0;
}
