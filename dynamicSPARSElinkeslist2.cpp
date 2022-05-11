/*This Program is NOT COMPLETED */
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    int rowpos;
    int colpos;
    Node *next;
};
class list : public Node
{
    public:
    Node *first = NULL;
    Node *last = NULL;
    void create( int n , int r , int c )
    {
        Node *temp = new Node;
        temp->data = n;
        temp->rowpos = r;
        temp->colpos = c;
        temp->next = NULL;
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
    }
    void print()
    {
        Node *temp;
        temp = first;
        cout<<"Row Position    : ";
        while(temp != NULL)
        {
            cout<<rowpos<<"\t";
            temp = temp->next;
        }
        temp = first;
        cout<<"\nColumn Position : ";
        while(temp!=NULL)
        {
            cout<<colpos<<"\t";
            temp = temp->next;
        }
        cout<<"\nValue           : ";
        while(temp != NULL)
        {
            cout<<data<<"\t";
            temp = temp->next;
        }
    }
};
int main()
{
   int sp[2][2] = { 0 , 1 , 0 ,2};
    list k;
    for( int i = 0 ; i < 2 ; i++)
    for(int j = 0 ; j < 2 ; j++)
    {
        if(sp[i][j] != 0)
        {
            k.create(sp[i][j] , i , j);
        }
    }
    k.print();
}