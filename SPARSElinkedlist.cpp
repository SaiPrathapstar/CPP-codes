#include<iostream>
using namespace std;
class Node
{
    public:
    int rowpos;
    int colpos;
    int value;
    Node *next;
};
void printList(Node *n)
{
    Node *temp = n;
    cout<<"\n Row Position    : ";
    while(temp != NULL)
    {
    cout<<temp->rowpos<<"\t";
    temp = temp->next;
    }
    temp = n;
    cout<<"\n Column Position : ";
    while(temp != NULL)
    {
        cout<<temp->colpos<<"\t";
        temp = temp->next;
    }
    temp = n;
    cout<<"\n Value           : ";
    while (temp != NULL)
    {
        cout<<temp->value<<"\t";
        temp = temp->next;
    }
    cout<<endl;   
}
int main()
{
    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;
    first->rowpos = 0;
    first->colpos = 2;
    first->value = 3;
    first->next = second;
    second->rowpos = 0;
    second->colpos = 4;
    second->value = 4;
    second->next = third;
    third->rowpos = 1;
    third->colpos = 2;
    third->value = 5;
    third->next = fourth;
    fourth->rowpos = 1;
    fourth->colpos = 3;
    fourth->value = 7;
    fourth->next = NULL;
    printList(first);
}