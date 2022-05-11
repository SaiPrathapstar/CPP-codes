/*This Program  is Ready to use */
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
};
class List : public Node
{
	static int n;
	public:
	Node *first = new Node;
	Node *last = new Node;
	List()
	{
		first = NULL;
		last = NULL;
	}
	void create();
	void insert();
	void deleteion();
	void display();
	void search();
};
int List :: n = 0;
void List :: create()
{
	Node *temp = new Node;
	temp->next = NULL;
	cout<<"Enter the value : ";
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
	n++;
	cout<<"Number of elements : "<<n<<endl;
}
void List :: insert()
{
	if(first == NULL)
	{
		cout<<"List is Empty.....Cannot insert"<<endl;
		return;
	}
	cout<<"Number of elements : "<<n<<endl;
	Node *temp = new Node;
	Node  *prev = NULL;
	Node  *cur = NULL;
	cout<<"Enter the value to be inserted : ";
	cin>>temp->data;
	temp->next = NULL;
	int pos,count = 1,ch;
	cout<<"Where do you want to insert : \n 1.First \n 2.Last \n 3.Middle"<<endl;
	cout<<"Enter your choice : ";
	cin>>ch;
	switch (ch)
	{
	case 1 :
		temp->next = first;
		first = temp;
		cout<<"Successfuly inserted at the Begining"<<endl;
		n++;
		break;
	case 2 :
	   last->next = temp;
	   last = temp;
	   cout<<"Successfully inserted at the End"<<endl;
	   n++;
	   break;
	case 3 :
	   prev = NULL;
	   cur = first;
	   cout<<"Enter the position : ";
	   cin>>pos;
	   while(count != pos)
	   {
		   prev = cur;
		   cur = cur->next;
		   count++;
	   }
	   if(count == pos)
	   {
		   prev->next = temp;
		   temp->next = cur;
	   }
	   n++;
	   break;
	default:
	cout<<"Not a valid choice!!!"<<endl;
		break;
	}
}
void List :: deleteion()
{
	if(first == NULL)
	{
		cout<<"List is Empty..Cannot perforn Deletetion"<<endl;
		return;
	}
	cout<<"Number of elements int the list : "<<n<<endl;
	int count = 1 , pos,ch;
	Node *prev = NULL;
	Node *cur = first;
	cout<<"Where do you want to delete\n1.Start\n2.End\n3.Between Start and End\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1 :
			first = cur->next;
			delete cur;
			n--;
			break;
		case 2 :
			last = NULL;
			while( cur->next != NULL )
			{
				cur = cur->next;
			}
			last = cur;
			delete last->next;
			n--;
			break;
		case 3 :
			cout<<"Enter the position of deletion : ";
	        cin>>pos;
			if( pos == 1 || pos == n )
			{
				cout<<"in this section only deletion at Midlle Position is Possible.. "<<endl;
				cout<<"If you want to delete at first or last you must select another option "<<endl;
				return;
			}
           	while(count != pos)
	        {
		     prev = cur;
	       	cur = cur->next;
		    count++;
        	}
        	if(count = pos)
        	{
	        	prev->next = cur->next;
	        	delete cur;
          	}
        	else
        	{
	           	cout<<"Unable to delete!!! "<<endl;
         	}
			 n--;
			 break;
	}
}
void List :: display()
{
	Node *temp = new Node;
	temp = first;
	if(first == NULL)
	{
		cout<<"List is empty \n";
	}
	else
	{
	while(temp != NULL)
	{
		cout<<temp->data<<"\t";
		temp = temp->next;
	}
	}
}
void List :: search()
{
	if(first == NULL)
	{
		cout<<"List is empty cannot Search in an Empty List.."<<endl;
		return;
	}
	Node *temp = new Node;
	temp = first;
	int key,pos = 0;
	bool check = false;
	cout<<"Enter the element to be searched : ";
	cin>>key;
	while(temp != NULL)
	{
		pos++;
		if(temp->data == key)
		{
			cout<<"Element "<<key<<" found at position : "<<pos;
			check = true;
		}
		temp = temp->next;
	}
	if(!check)
	{
		cout<<"element not found!!! "<<endl;
	}
}
int main()
{
	List l;
	int ch;
	while(1)
	{
		cout<<"\n1.Create\n2.Insert\n3.Delete\n4.Display\n5.Search\n6.Exit\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 :
			l.create();
			break;
			case 2 :
			l.insert();
			break;
			case 3 : 
			l.deleteion();
			break;
			case 4 :
			l.display();
			break;
			case 5 :
			l.search();
			break;
			case 6 :
			exit(0);
			break;
			default :
			cout<<"Invalid choice.....";
			break;
		}
	}
}