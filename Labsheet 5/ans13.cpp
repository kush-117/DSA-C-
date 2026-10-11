// 13.  Write a C++ program to implement Stack using a class. 

#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX = 5;
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow!\n";
            return;
        }

        arr[++top] = value;
        cout << value << " pushed.\n";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!\n";
            return;
        }

        cout << "Popped element: " << arr[top--] << endl;
    }

    void peek() {
        if (top == -1)
            cout << "Stack is empty.\n";
        else
            cout << "Top element: " << arr[top] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Stack: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    s.peek();
    s.pop();
    s.display();

    return 0;
}
