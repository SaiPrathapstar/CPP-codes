#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
};
void printListAsc(Node *n)
{
    while (n != NULL)
    {
        cout<<n->data<<"\t";
        n = n->next;
    }
    
}
void printListdes(Node *n)
{
    while (n != NULL)
    {
        cout<<n->data<<"\t";
        n = n->prev;
    }
    
}
int main()
{
    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;
    first->data = 1;
    first->prev = NULL;
    first->next = second;
    second->data = 2;
    second->prev = first;
    second->next = third;
    third->data = 3;
    third->prev = second;
    third->next = NULL;
    printListAsc(first);
    printListdes(third);
}