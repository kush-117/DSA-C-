// 12.  Write a C++ program to implement two stacks in a single array. 

#include <iostream>
using namespace std;

const int MAX = 10;
int arr[MAX];
int top1 = -1;
int top2 = MAX;

void push1(int value) {
    if (top1 + 1 == top2) {
        cout << "Array Overflow!\n";
        return;
    }

    arr[++top1] = value;
    cout << value << " pushed into Stack 1.\n";
}

void push2(int value) {
    if (top1 + 1 == top2) {
        cout << "Array Overflow!\n";
        return;
    }

    arr[--top2] = value;
    cout << value << " pushed into Stack 2.\n";
}

void pop1() {
    if (top1 == -1) {
        cout << "Stack 1 Underflow!\n";
        return;
    }

    cout << "Popped from Stack 1: "
         << arr[top1--] << endl;
}

void pop2() {
    if (top2 == MAX) {
        cout << "Stack 2 Underflow!\n";
        return;
    }

    cout << "Popped from Stack 2: "
         << arr[top2++] << endl;
}

int main() {
    push1(10);
    push1(20);

    push2(100);
    push2(200);

    pop1();
    pop2();

    return 0;
}
