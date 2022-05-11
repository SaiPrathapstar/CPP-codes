#include<iostream>
#define MAX 5
int queue[MAX],front,rear;
using namespace std;
void initqueue()
{
    front = -1;
    rear = -1;
}
void enqueue()
{
    if(rear == MAX-1)
    {
        cout<<"List is full.."<<endl;
        return;
    }
    int n;
    cout<<"Enter an element : ";
    cin>>n;
    if(front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = n;
}
void dequeue()
{
    if(front > rear)
    {
        front = -1;
        rear = -1;
        cout<<"List is Empty........"<<endl;
        return;
    }
    cout<<"Element "<<queue[front]<<" is deleted"<<endl;
    queue[front] = 0;
    front++;
}
void display()
{
    if((front == -1 && rear == -1) || (front > rear) )
    {
        cout<<"List is Empty....."<<endl;
        return;
    }
    cout<<"Elements in the queue are : ";
    for(int i = front ; i<= rear ; i++)
    cout<<queue[i]<<"\t";
    cout<<endl;
}
void peek()
{
    if((front == -1 && rear == -1) || (front > rear) )
    {
        cout<<"List is Empty....."<<endl;
        return;
    }
    cout<<"First Element is : "<<queue[front]<<endl;
}
int main()
{
    initqueue();
    while(1)
    {
        int k;
        cout<<"Choose from the below list of options : \n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.EXIT";
        cout<<"\nEnter your option : ";
        cin>>k;
        switch (k)
        {
            case 1 :
            enqueue();
            break;
            case 2 :
            dequeue();
            break;
            case 3 :
            display();
            break;
            case 4 :
            peek();
            break;
            case 5 :
            exit(0);
            break;
            default :
            cout<<"Invalid choice please TRY AGAIN."<<endl;
            break;
        }
    }
    return 0;
}