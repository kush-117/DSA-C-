// 15.  Write a C++ program to analyze the time complexity of Push, Pop, Peek, and Display operations.

#include <iostream>
using namespace std;

const int MAX = 100;
int arr[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Overflow!\n";
        return;
    }

    arr[++top] = value;
    cout << "Push completed in constant time.\n";
}

void pop() {
    if (top == -1) {
        cout << "Underflow!\n";
        return;
    }

    top--;
    cout << "Pop completed in constant time.\n";
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty.\n";
        return;
    }

    cout << "Top element: " << arr[top] << endl;
    cout << "Peek takes constant time.\n";
}

void display() {
    int count = 0;

    cout << "Stack elements: ";

    for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
        count++;
    }

    cout << "\nElements processed: " << count << endl;
    cout << "Display takes O(n) time.\n";
}

int main() {
    int n, value;

    cout << "How many elements do you want to push? ";
    cin >> n;

    if (n < 0 || n > MAX) {
        cout << "Invalid number of elements.\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        push(value);
    }

    cout << "\n--- Complexity Analysis ---\n";

    display();
    peek();
    pop();

    cout << "\nTheoretical Time Complexity:\n";
    cout << "Push   : O(1)\n";
    cout << "Pop    : O(1)\n";
    cout << "Peek   : O(1)\n";
    cout << "Display: O(n)\n";
    cout << "Space  : O(n)\n";

    return 0;
}
