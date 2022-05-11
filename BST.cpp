#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;
};
class Tree : public Node
{
    Node *root = NULL;
    public:
    void insert()
    {
        Tree *temp = new Node;
        temp = NULL;
        cout<<"Enter a number to store in the tree : ";
        cin>>temp->data;
    if(root == NULL)
    {
        root = temp;
        return;
    }
    Node *cur = root;
    Node *prev = NULL;
    
    }
}