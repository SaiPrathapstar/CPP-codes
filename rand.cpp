#include<iostream>
using namespace std;
class Node
{
public:
int data;
Node *next;
};
class List : Node
{
	public:
		static int n;
		Node *first;
		Node *last;
		List()
		{
			first = NULL;
			last = NULL;
		}
		void create();
		void insert();
		void deletion();
		void search();
		void display();
};

int List :: n = 0;
void List :: create()
{
	Node *temp = new Node;
	temp->next = NULL;
	cout<<"Enter data to insert : ";
	cin>>temp->data;
	if(first == NULL)
	{
		first = temp;
		last = first;
		n++;
		cout<<"Number of elements are : "<<n<<endl;
		return;
	}
	last->next = temp;
	last = temp;
	last->next = NULL;
	n++;
	cout<<"Number of elements are : "<<n<<endl;
}
void List :: insert()
{
	if ( first == NULL )
	{
		cout<<"The List is empty cannot perform insertion"<<endl;
		return;
	}
	cout<<"Number of elements : "<<n<<endl;
	int pos , count = 1 , ch;
	Node *prev , *cur ;
	Node *temp = new Node;
	prev = NULL;
	cur = first;
	cout<<"Where do you want to insert \n1.Starting \n2.Last \n3.Middle\nEnter your choice : ";
	cin>>ch;
	switch(ch)
		{
		case 1 :
			cout<<"In this selection you cannot perform insertion!"<<endl;
			break;
		case 2 : 
		cout<<"In this selection you cannot perform insertion at last"<<endl;
		break;
		case 3 :
			cout<<"Enter the position to insert : ";
			cin>>pos;
			while(count != pos)
			{
				prev = cur;
				cur = cur->next;
				count++;
			}
			if (count == pos)
			{
				cout<<"Enter data to be inserted : ";
				cin>>temp->data;
				prev->next = temp;
				temp->next = cur;
				n++;
			}
			break;
		default :
			cout<<"Invalid choice..."<<endl;
        }
}
void List :: deletion()
{
	if(first == NULL)
	{
		cout<<"The list is empty cannot perform delete operation...."<<endl;
		return;
	}
	cout<<"Number of elements are : "<<n<<endl;
	int pos, count = 1;
	cout<<"Enter the positon to delete : ";
	cin>>pos;
	if(pos == 1)
	{
		Node *temp;
		temp = first;
		first = first->next;
		delete temp;
		n--;
	}
	else if(pos == n)
	{
		Node *prev , *cur;
		prev = NULL;
		cur = first;
		while( cur != last )
		{
			prev->next = cur;
			cur = cur->next;
		}
		if(cur == last)
		{
			prev->next = NULL;
			delete cur;
			last = prev;
			n--;
		}
	}
	else
	{
	Node *prev , *cur , *temp;
	prev = NULL;
	cur = first;
	while(pos != count)
	{
		prev = cur;
		cur = cur->next;
		count++;
	}
	if( pos == count )
	{
		prev->next = cur->next;
		temp = cur;
		delete temp;
	}
	n--;
	}
}
void List :: display()
{
	Node *temp;
	temp = first;
	if(first == NULL)
	{
		cout<<"The list is empty nothing to display\n";
		return;
	}
	cout<<"Printing the data elemnets \n";
	while( temp->next != NULL )
	{
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
}
void List :: search()
{
	int key , pos = 1 , val = 0;
	cout<<"Enter an elemnt to search : ";
	cin>>key;
	Node *temp;
	temp = first;
	while( temp->next != NULL )
	{
		if(temp->data == key)
		{
			cout<<"The key is found at postition : "<<pos<<endl;
			val = 1;
		}
		temp = temp->next;
		pos++;
	}
	if( val == 0 )
	{
		cout<<"The key element is not found "<<endl;
	}
}
int main()
{
	List l;
	int ch;
	while(1)
	{
		cout<<"\n1.Create \n2.Insert \n3.Delete \n4.Display \n5.Search \n6.EXIT\nEnter your choice : ";
		cin>>ch;
		switch(ch) 
		{
			case 1:
				l.create();
				break;
			case 2 :
				l.insert();
				break;
			case 3 :
				l.deletion();
				break;
			case 4 :
				l.display();
				break;
			case 5 :
				l.search();
				break;
			case 6 :
				return 0;
				break;
			default :
				cout<<"Invalid choice try again"<<endl;
				break;
			
		}
	}
	return 0;
}