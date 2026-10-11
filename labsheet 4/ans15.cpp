// 15. Write a C++ program to implement a Circular Linked List and perform traversal and insertion operations.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insert(int value) {
    Node* n = new Node{value, nullptr};

    if (head == nullptr) {
        head = n;
        n->next = head;
        return;
    }

    Node* temp = head;

    while (temp->next != head)
        temp = temp->next;

    temp->next = n;
    n->next = head;
}

void display() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;

    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)\n";
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Insert\n2. Display\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insert(value);
                break;

            case 2:
                display();
                break;

            case 3:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 3);

    if (head != nullptr) {
        Node* temp = head->next;

        while (temp != head) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }

        delete head;
        head = nullptr;
    }

    return 0;
}