// 4. Write a C++ program to insert a node at a given position.
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

    int value, pos;
    cout << "Enter value and position: ";
    cin >> value >> pos;

    if (pos < 1) {
        cout << "Invalid position\n";
        return 0;
    }

    Node* newNode = new Node{value, nullptr};

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != nullptr; i++)
            temp = temp->next;

        if (temp == nullptr) {
            cout << "Invalid position\n";
            delete newNode;
            return 0;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    cout << "Linked List: ";
    for (Node* temp = head; temp != nullptr; temp = temp->next)
        cout << temp->data << " -> ";

    cout << "NULL\n";
    return 0;
}