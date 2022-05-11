#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class stack : public Node
{
	public:
    Node *first = NULL;
    Node *last =  NULL;
    void create()
    {
        Node *temp = new Node;
        temp->next = NULL;
        cout<<"Enter data to be inserted : ";
        cin>>temp->data;
        if(first == NULL)
        {
            first = temp;
            last = temp;
        }
        else
        {
            last->next = temp;
            last = temp;
        }
        last->next = NULL;
    }
    void dleleting()
    {
        if(first == NULL && last == NULL)
        {
            cout<<"List is Empty"<<endl;
            return;
        }
        Node *prev = new Node;
        Node *cur = new Node;
        prev = NULL;
        cur = first;
        while(cur->next != NULL)
        {
            prev = cur;
            cur = cur->next;
        }
        if((cur == last || cur->next == NULL) && (first!=last))
        {
            cout<<"The deleted Element is : "<<cur->data<<endl;
            delete cur;
            prev->next = NULL;
            last = prev;
            last->next = NULL;
            return;
        }
        if( first == last && (first != NULL && last != NULL) )
        {
        	cout<<"The deleted Element is : "<<cur->data<<endl;
        	delete cur;
        	first = NULL;
        	last = NULL;
        	cout<<"Now , the list is Empty"<<endl;
        	return;
		}
    }
    void dispaly()
    {
        if(first == NULL && last == NULL)
        {
            cout<<"Stack is Empty "<<endl;
            return;
        }
        Node *temp = new Node;
        temp = first;
        cout<<"The elements in the List are : ";
        while( temp != NULL )
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
    }
    void peek()
    {
    	if(first==NULL && last == NULL)
    	{
    		cout<<"List is Empty "<<endl;
    		return;
		}
        cout<<"The last element is : "<<last->data<<endl;
    }
};
int main()
{
    stack l;
    int ch;
    while(1)
    {
        cout<<"\nChoose from below list of Options : \n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit"<<endl;
        cout<<"Choose your Option : ";
        cin>>ch;
        switch(ch)
        {
            case 1 : 
            l.create();
            break;
            case 2 :
            l.dleleting();
            break;
            case 3 :
            l.dispaly();
            break;
            case 4 :
            l.peek();
            break;
            case 5 : 
            exit(0);
            break;
            default :
            cout<<"Invalid Choice...Please try Again"<<endl;
            break;
        }
    }
    return 0;
}
