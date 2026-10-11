// 4. Write a C++ program to display the TOP element using Peek operation. 

#include <iostream>
using namespace std;

int main() {
    int stackArr[5] = {10, 20, 30};
    int top = 2;

    if (top == -1) {
        cout << "Stack is empty.\n";
    } else {
        cout << "TOP element: " << stackArr[top] << endl;
    }

    return 0;
}
