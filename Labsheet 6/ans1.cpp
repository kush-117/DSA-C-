// 1. Write a C++ program to implement a Queue using an array. Perform Enqueue, Dequeue, Peek and Display 
// operations. 

#include <iostream>
using namespace std;

#define SIZE 5

int q[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow\n";
        return;
    }

    if (front == -1)
        front = 0;

    q[++rear] = x;
    cout << x << " inserted\n";
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return;
    }

    cout << "Deleted: " << q[front++] << endl;

    if (front > rear)
        front = rear = -1;
}

void peek() {
    if (front == -1)
        cout << "Queue is empty\n";
    else
        cout << "Front element: " << q[front] << endl;
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue: ";
    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";
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

    return 0;
}
