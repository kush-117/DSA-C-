// 13. Write a menu-driven C++ program implementing insertion, deletion, searching and display operations. 
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
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = n;
}

void deleteNode(int value) {
    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Element not found\n";
        return;
    }

    if (prev == nullptr)
        head = temp->next;
    else
        prev->next = temp->next;

    delete temp;
    cout << "Node deleted\n";
}

void search(int value) {
    Node* temp = head;
    int pos = 1;

    while (temp != nullptr) {
        if (temp->data == value) {
            cout << "Found at position " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }

    cout << "Element not found\n";
}

void display() {
    Node* temp = head;

    if (temp == nullptr) {
        cout << "List is empty\n";
        return;
    }

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Insert\n2. Delete\n3. Search";
        cout << "\n4. Display\n5. Exit\n";
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
                cout << "Enter value to search: ";
                cin >> value;
                search(value);
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 5);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
