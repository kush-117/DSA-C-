// 9. Write a C++ program to convert an Infix expression into Postfix using Stack. 

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

string infixToPostfix(string infix) {
    char st[1000];
    int top = -1;
    string postfix = "";

    for (char ch : infix) {
        if (ch == ' ')
            continue;

        if (isalnum((unsigned char)ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            st[++top] = ch;
        }
        else if (ch == ')') {
            while (top != -1 && st[top] != '(')
                postfix += st[top--];

            if (top != -1)
                top--;  // Remove '('
        }
        else {
            while (top != -1 && st[top] != '(' &&
                   (precedence(st[top]) > precedence(ch) ||
                   (precedence(st[top]) == precedence(ch)
                    && ch != '^'))) {
                postfix += st[top--];
            }

            st[++top] = ch;
        }
    }

    while (top != -1)
        postfix += st[top--];

    return postfix;
}

int main() {
    string infix;

    cout << "Enter infix expression: ";
    getline(cin, infix);

    cout << "Postfix expression: "
         << infixToPostfix(infix) << endl;

    return 0;
}
