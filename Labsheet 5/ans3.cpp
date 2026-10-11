// 3. Write a C++ program to demonstrate Stack Underflow. 

#include <iostream>
using namespace std;

int stackArr[5];
int top = -1;

void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Stack is empty.\n";
    } else {
        cout << "Removed element: "
             << stackArr[top--] << endl;
    }
}

int main() {
    // Attempt to remove an element from an empty stack.
    pop();

    return 0;
}
