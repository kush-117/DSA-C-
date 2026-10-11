// 12. Write a C++ program to sort the elements of a Linked List in ascending order. 
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{30, nullptr};
    head->next = new Node{10, nullptr};
    head->next->next = new Node{40, nullptr};
    head->next->next->next = new Node{20, nullptr};

    for (Node* i = head; i != nullptr; i = i->next) {
        for (Node* j = i->next; j != nullptr; j = j->next) {
            if (i->data > j->data)
                swap(i->data, j->data);
        }
    }

    cout << "Sorted Linked List: ";
    for (Node* temp = head; temp != nullptr; temp = temp->next)
        cout << temp->data << " -> ";

    cout << "NULL\n";
    return 0;
}