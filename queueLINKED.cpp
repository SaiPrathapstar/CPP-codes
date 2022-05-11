#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class queue : public Node
{
    public:
    Node *front ;
	Node *rear;
    queue()
    {
    	front = NULL;
    	rear = NULL;
	}
	void enqueue()
    {
        Node *temp = new Node;
        cout<<"Enter data to be inserted : ";
        cin>>temp->data;
        temp->next = NULL;
        if(front == NULL)
        {
            front = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = rear->next;
        }
    }
    void dequeue()
    {
        if(front == NULL)
        {
            cout<<"Queue is empty.Cannot perform delete operation."<<endl;
            return;
        }
        Node * temp = new Node;
        temp = front;
        front = front->next;
        cout<<"Deleted Element is : "<<temp->data<<endl;
        delete temp;
    }
    void peek()
    {
        cout<<"The element at front is : "<<front->data<<endl;
    }
    void display()
    {
        if(front == NULL)
        {
            cout<<"List is Empty cannot perform this operaion"<<endl;
            return;
        }
        Node *temp = new Node;
        temp = front;
        cout<<"Elements in the list are : ";
        while(temp != NULL)
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    queue q;
    int n;
    while (1)
    {
        cout<<"Select from the below list of Options : "<<endl;
        cout<<"1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.EXIT"<<endl;
        cout<<"Your slected option is : ";
        cin>>n;
        switch(n)
        {
            case 1 :
            q.enqueue();
            break;
            case 2 :
            q.dequeue();
            break;
            case 3 :
            q.peek();
            break;
            case 4:
            q.display();
            break;
            case 5 :
            exit(0);
            break;
            default : 
            cout<<"Invalid Choice. Please try again..."<<endl;
            break;
        }
    }
    return 0;
}
