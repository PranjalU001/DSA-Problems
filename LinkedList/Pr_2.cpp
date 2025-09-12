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
{
    Node *head = new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout << "NULL" << endl;
}