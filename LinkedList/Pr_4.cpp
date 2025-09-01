#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
int main()
{   int n ;
    cout<<"Enter the Number Of Nodes in The LinkedList ";
    cin>>n;
    Node *head = NULL;
    Node *temp = head;
    for (int i = 0; i < n; i++)
    {   int val;
        cin>>val;
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            temp = head;
        }
        else{
            temp ->next = newNode;
            temp = newNode;
        }
    }
    Node *temp1 = head;
    while (temp1!=NULL)
    {
        cout<<temp1->data <<" -> ";
        temp1=temp1->next;
    }
    cout<<"NULL";

}
