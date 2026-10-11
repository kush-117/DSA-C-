// 11. Write a C++ program to reverse a Singly Linked List. 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    Node *prev = nullptr, *current = head, *nextNode;

    while (current != nullptr) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    head = prev;

    cout << "Reversed Linked List: ";
    for (Node* temp = head; temp != nullptr; temp = temp->next)
        cout << temp->data << " -> ";

    cout << "NULL\n";
    return 0;
}