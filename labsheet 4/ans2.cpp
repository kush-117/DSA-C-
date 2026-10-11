// 2. Write a C++ program to insert a node at the beginning of a Linked List. 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{20, nullptr};
    head->next = new Node{30, nullptr};

    int value;
    cout << "Enter value to insert: ";
    cin >> value;

    Node* newNode = new Node{value, head};
    head = newNode;

    cout << "Linked List: ";
    for (Node* temp = head; temp != nullptr; temp = temp->next)
        cout << temp->data << " -> ";

    cout << "NULL\n";
    return 0;
}