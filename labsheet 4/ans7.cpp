// 7. Write a C++ program to delete a node from a given position.
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

    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    if (pos < 1 || head == nullptr) {
        cout << "Invalid position or empty list\n";
        return 0;
    }

    Node* temp = head;

    if (pos == 1) {
        head = head->next;
        delete temp;
    } else {
        for (int i = 1; i < pos - 1 && temp != nullptr; i++)
            temp = temp->next;

        if (temp == nullptr || temp->next == nullptr) {
            cout << "Invalid position\n";
            return 0;
        }

        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    }

    cout << "Linked List: ";
    for (Node* p = head; p != nullptr; p = p->next)
        cout << p->data << " -> ";

    cout << "NULL\n";
    return 0;
}