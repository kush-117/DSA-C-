// 5. Write a C++ program to delete a node from the beginning.
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

    if (head == nullptr) {
        cout << "List is empty\n";
        return 0;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    cout << "Linked List: ";
    for (Node* p = head; p != nullptr; p = p->next)
        cout << p->data << " -> ";

    cout << "NULL\n";
    return 0;
}