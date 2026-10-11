// 8. Write a C++ program to check balanced parentheses using Stack. 

#include <iostream>
#include <string>
using namespace std;

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool isBalanced(string expr) {
    char stackArr[1000];
    int top = -1;

    for (char ch : expr) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stackArr[++top] = ch;
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1)
                return false;

            if (!isMatching(stackArr[top], ch))
                return false;

            top--;
        }
    }

    return top == -1;
}

int main() {
    string expr;

    cout << "Enter an expression: ";
    getline(cin, expr);

    if (isBalanced(expr))
        cout << "Parentheses are balanced.\n";
    else
        cout << "Parentheses are not balanced.\n";

    return 0;
}
