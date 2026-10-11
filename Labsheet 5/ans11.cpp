// 11.  Write a C++ program to convert an Infix expression into Prefix using Stack. 

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

string infixToPrefix(string infix) {
    string reversed = "";

    for (int i = (int)infix.length() - 1; i >= 0; i--) {
        char ch = infix[i];

        if (ch == '(')
            reversed += ')';
        else if (ch == ')')
            reversed += '(';
        else
            reversed += ch;
    }

    char st[1000];
    int top = -1;
    string postfix = "";

    for (char ch : reversed) {
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
                top--;
        }
        else {
            // Adjust equal-precedence handling for reversed input.
            while (top != -1 && st[top] != '(' &&
                   (precedence(st[top]) > precedence(ch) ||
                   (precedence(st[top]) == precedence(ch)
                    && ch == '^'))) {
                postfix += st[top--];
            }

            st[++top] = ch;
        }
    }

    while (top != -1)
        postfix += st[top--];

    reverse(postfix.begin(), postfix.end());
    return postfix;
}

int main() {
    string infix;

    cout << "Enter infix expression: ";
    getline(cin, infix);

    cout << "Prefix expression: "
         << infixToPrefix(infix) << endl;

    return 0;
}
