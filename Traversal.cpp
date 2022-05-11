#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;
};
void inorder(Node *n)
    {
        if(n == NULL)
        {
            return;
        }
        else
        {
            inorder(n->left);
            cout<<n->data<<"\t";
            inorder(n->right);
        }
    }
void preorder(Node *n)
    {
        if(n == NULL)
        {
            return;
        }
        else
        {
            cout<<n->data<<"\t";
            preorder(n->left);
            preorder(n->right);
        }
    }
void postorder(Node *n)
    {
        if(n == NULL)
        {
            return;
        }
        else
        {
            postorder(n->left);
            postorder(n->right);
            cout<<n->data<<"\t";
        }
    }
int main()
{
    Node *root = new Node;
    root->data = 1;
    Node *sec = new Node;
    root->left = sec;
    sec->data = 2;
    Node *third = new  Node;
    root->right = third;
    third->data = 3;
    sec->left = sec->right = third->left = third->right = NULL;
    cout<<"\nPre-Order is   : ";
    preorder(root);
    cout<<"\nIn-order is    : ";
    inorder(root);
    cout<<"\nPost-Order is  : ";
    postorder(root);
}
