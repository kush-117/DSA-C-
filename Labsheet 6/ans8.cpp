// 8. Write a menu-driven C++ program implementing all basic Queue operations. 

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
    cout << "Element inserted\n";
}

void dequeue() {
    if (front == -1) {
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
        cout << "Front: " << q[front] << endl;
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }

    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";

    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n1.Enqueue  2.Dequeue  3.Peek";
        cout << "\n4.Display  5.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}
