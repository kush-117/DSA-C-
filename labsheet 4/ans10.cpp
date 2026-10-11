// 10. Write a C++ program to find the maximum and minimum element in a Linked List.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{25, nullptr};
    head->next = new Node{10, nullptr};
    head->next->next = new Node{40, nullptr};
    head->next->next->next = new Node{5, nullptr};

    if (head == nullptr) {
        cout << "List is empty\n";
        return 0;
    }

    int maximum = head->data;
    int minimum = head->data;

    for (Node* temp = head->next; temp != nullptr; temp = temp->next) {
        if (temp->data > maximum)
            maximum = temp->data;

        if (temp->data < minimum)
            minimum = temp->data;
    }

    cout << "Maximum element: " << maximum << endl;
    cout << "Minimum element: " << minimum << endl;

    return 0;
}