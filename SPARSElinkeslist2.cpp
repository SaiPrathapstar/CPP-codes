#include<iostream>
using namespace std;
class Node
{
    public:
    int rowpos,colpos,value;
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
    int spr[3][3] = {0,0,0,0,0,1,0,2,0};
    int count = 0;
    for(int i = 0 ; i < 3 ; i++)
    for(int j = 0 ; j < 3 ; j++)
    if(spr[i][j]!=0)
    count++;
    Node arr[count];
    int n = 0;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            if(spr[i][j]!=0)
            {
               (arr[n]).rowpos = i;
               (arr[n]).colpos = j;
               (arr[n]).value = spr[i][j];
               if(n!=count-1)
               {
               (arr[n]).next = &arr[n+1];
			   }
               else
               (arr[n]).next=NULL;
               n++;
            }
        }
    }
   printList(&arr[0]);
}
