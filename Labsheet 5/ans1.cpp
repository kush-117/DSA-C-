// 1. Write a C++ program to implement a Stack using an array with Push, Pop, Peek, and Display operations. 

#include <iostream>
using namespace std;

const int MAX = 5;
int stackArr[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow!\n";
        return;
    }

    stackArr[++top] = value;
    cout << value << " pushed into stack.\n";
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow!\n";
        return;
    }

    cout << "Popped element: " << stackArr[top--] << endl;
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

    cout << "Stack (top to bottom): ";
    for (int i = top; i >= 0; i--)
        cout << stackArr[i] << " ";

    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    display();
    peek();
    pop();
    display();

    return 0;
}
