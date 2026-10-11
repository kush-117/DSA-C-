// 8. Write a C++ program to search for an element in a Singly Linked List. 
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

    int key, pos = 1;
    cout << "Enter element to search: ";
    cin >> key;

    Node* temp = head;

    while (temp != nullptr) {
        if (temp->data == key) {
            cout << "Element found at position " << pos << endl;
            return 0;
        }

        temp = temp->next;
        pos++;
    }

    cout << "Element not found\n";
    return 0;
}