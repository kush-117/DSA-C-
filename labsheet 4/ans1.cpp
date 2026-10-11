// 1. Write a C++ program to create and display a Singly Linked List. 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = nullptr, *tail = nullptr;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;

        Node* newNode = new Node{value, nullptr};

        if (head == nullptr)
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Linked List: ";
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}