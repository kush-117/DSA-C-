//  14. Write a C++ program to implement a Doubly Linked List and perform insertion and deletion operations. 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = nullptr;

void insert(int value) {
    Node* n = new Node{value, nullptr, nullptr};

    if (head == nullptr) {
        head = n;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = n;
    n->prev = temp;
}

void deleteNode(int value) {
    Node* temp = head;

    while (temp != nullptr && temp->data != value)
        temp = temp->next;

    if (temp == nullptr) {
        cout << "Element not found\n";
        return;
    }

    if (temp->prev != nullptr)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != nullptr)
        temp->next->prev = temp->prev;

    delete temp;
    cout << "Node deleted\n";
}

void display() {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insert(value);
                break;

            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                deleteNode(value);
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 4);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}