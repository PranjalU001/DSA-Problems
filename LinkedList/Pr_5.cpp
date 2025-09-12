#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

int main() {
    int n;
    cout << "Enter the Number Of Nodes in The LinkedList: ";
    cin >> n;

    Node *head = NULL;
    Node *temp = head;

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Print initial list
    cout << "Linked List: ";
    Node *temp1 = head;
    while (temp1 != NULL) {
        cout << temp1->data << " -> ";
        temp1 = temp1->next;
    }
    cout << "NULL" << endl;

    // Insert at end
    cout << "What Value You Want to Enter at the End Of LinkedList: ";
    int number;
    cin >> number;
    Node *newNode1 = new Node(number);

    Node *temp2 = head;
    while (temp2->next != NULL) {  // stop at last node
        temp2 = temp2->next;
    }
    temp2->next = newNode1;  // attach new node

    // Print updated list
    cout << "Updated Linked List: ";
    temp1 = head;
    while (temp1 != NULL) {
        cout << temp1->data << " -> ";
        temp1 = temp1->next;
    }
    cout << "NULL" << endl;

    return 0;
}
