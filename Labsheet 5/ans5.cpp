// 5. Write a menu-driven C++ program for Push, Pop, Peek, and Display. 

#include <iostream>
using namespace std;

const int MAX = 100;
int stackArr[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow!\n";
        return;
    }

    stackArr[++top] = value;
    cout << "Element pushed successfully.\n";
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow!\n";
        return;
    }

    cout << "Popped: " << stackArr[top--] << endl;
}

void peek() {
    if (top == -1)
        cout << "Stack is empty.\n";
    else
        cout << "Top element: " << stackArr[top] << endl;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty.\n";
        return;
    }

    cout << "Stack: ";
    for (int i = top; i >= 0; i--)
        cout << stackArr[i] << " ";

    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
