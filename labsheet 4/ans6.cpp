// 6. Write a C++ program to delete a node from the end. 
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

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
    } else {
        Node* temp = head;

        while (temp->next->next != nullptr)
            temp = temp->next;

        delete temp->next;
        temp->next = nullptr;
    }

    cout << "Linked List: ";
    for (Node* p = head; p != nullptr; p = p->next)
        cout << p->data << " -> ";

    cout << "NULL\n";
    return 0;
}