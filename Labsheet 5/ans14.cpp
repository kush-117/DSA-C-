// 14.  Write a C++ program to demonstrate Stack use in recursion. 

#include <iostream>
using namespace std;

int factorial(int n) {
    // Base case stops recursion.
    if (n <= 1)
        return 1;

    // Each call is stored on the call stack.
    return n * factorial(n - 1);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative integers.\n";
        return 0;
    }

    cout << "Factorial of " << n
         << " = " << factorial(n) << endl;

    return 0;
}
