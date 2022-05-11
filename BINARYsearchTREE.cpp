/*This is an incomplete program*/
#include<iostream>
#define SPACE 10
using namespace std;
class Node
{
    public:
    int value;
    Node *left;
    Node *right;
};
class Tree
{
    public:
    Node *root = NULL;
    void insert()
    {
        int data;
        cout<<"Enter data to be inserted : ";
        cin>>data;
        if(root == NULL)
        {
            root->value = data;
            cout<<"Value inserted as root node"<<endl;
            return;
        }
        Node *new_ = new Node;
        new_->value = data;
        new_->right = NULL;
        new_->left = NULL;
        Node *cur = new Node;
        cur = root;
        Node *prev = NULL;
        while(cur != NULL)
        {
            if(cur->value == new_->value)
            {
                cout<<"No duplicate values allowed "<<endl;
                return;
            }
            else if(new_->value < cur->value && cur->left == NULL )
            {
                cur = cur->left;
                break;
            }
            else if(new_->value > cur->value && cur->right == NULL)
            {
                cur = cur->right;
                break;
            }
            else
            {
                cout<<"Cannot perform"<<endl;
            }
            prev = cur;
        }
        if(cur == NULL)
        {
            if( new_->value < prev->value)
            {
                prev->left = new_;
            }
            else if (new_->value > prev->value)
            {
                prev->right = new_;
            }
            else
            {
                return;
            }
        }
        else
        {
            cout<<"Unable to insert!!!"<<endl;
            return;
        }
    }
    void print2D(Node * r, int space) 
    {
    if (r == NULL) // Base case  1
      return;
    space += SPACE; // Increase distance between levels   2
    print2D(r -> right, space); // Process right child first 3 
    cout << endl;
    for (int i = SPACE; i < space; i++) // 5 
      cout << " "; // 5.1  
    cout << r -> value << "\n"; // 6
    print2D(r -> left, space); // Process left child  7
    }
};
int main()
{
    Tree obj;
    int ch;
    while(1)
    {
        cout<<"Select from the below list of options : \n1.Insert\n2.Display\nEnter your option : ";
        cin>>ch;
        switch (ch)
        {
            case 1 :
            obj.insert();
            break;
            case 2 :
            obj.print2D(obj.root , 5);
            break;
            default :
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
}
