// 3. Write a C++ program to insert a node at the end of a Linked List.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};

    int value;
    cout << "Enter value to insert: ";
    cin >> value;

    Node* newNode = new Node{value, nullptr};

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;

        while (temp->next != nullptr)
            temp = temp->next;

        temp->next = newNode;
    }

    cout << "Linked List: ";
    for (Node* temp = head; temp != nullptr; temp = temp->next)
        cout << temp->data << " -> ";

    cout << "NULL\n";
    return 0;
}