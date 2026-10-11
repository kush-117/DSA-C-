// 14. Write a C++ program to implement Queue using a Linked List. 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

void enqueue(int x) {
    Node* newNode = new Node{x, nullptr};

    if (rear == nullptr) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << x << " inserted\n";
}

void dequeue() {
    if (front == nullptr) {
        cout << "Queue Underflow\n";
        return;
    }

    Node* temp = front;
    cout << "Deleted: " << front->data << endl;

    front = front->next;

    if (front == nullptr)
        rear = nullptr;

    delete temp;
}

void peek() {
    if (front == nullptr)
        cout << "Queue is empty\n";
    else
        cout << "Front element: " << front->data << endl;
}

void display() {
    if (front == nullptr) {
        cout << "Queue is empty\n";
        return;
    }

    Node* temp = front;

    cout << "Queue: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    peek();
    dequeue();
    display();

    while (front != nullptr)
        dequeue();

    return 0;
}
