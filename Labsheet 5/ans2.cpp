// 2. Write a C++ program to demonstrate Stack Overflow. 

#include <iostream>
using namespace std;

const int MAX = 3;
int stackArr[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot insert "
             << value << endl;
    } else {
        stackArr[++top] = value;
        cout << value << " inserted.\n";
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    // The stack is full now.
    push(40);

    return 0;
}
