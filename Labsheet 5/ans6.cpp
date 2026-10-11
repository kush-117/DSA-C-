// 6. Write a C++ program to implement a Stack of integers using an array. 

#include <iostream>
using namespace std;

class IntegerStack {
    static const int MAX = 5;
    int arr[MAX];
    int top;

public:
    IntegerStack() {
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

        cout << "Popped: " << arr[top--] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty.\n";
            return;
        }

        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main() {
    IntegerStack s;

    s.push(100);
    s.push(200);
    s.push(300);

    cout << "Stack elements: ";
    s.display();

    s.pop();

    cout << "After Pop: ";
    s.display();

    return 0;
}
