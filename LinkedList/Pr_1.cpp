#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int val){
        data = val;    // constructor mein data assign
        next = NULL;
    }
};

// Linked List ko print karne ka function
void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // ek ek node banate hain
    Node* head = new Node(10);   // pehla node
    head->next = new Node(20);   // dusra node
    head->next->next = new Node(30); // teesra node

    display(head); // linked list print karna

    return 0;
}
