// 7. Write a C++ program to reverse a string using Stack. 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char stackArr[1000];
    int top = -1;

    cout << "Enter a string: ";
    getline(cin, str);

    // Push every character onto the stack.
    for (int i = 0; i < (int)str.length(); i++)
        stackArr[++top] = str[i];

    cout << "Reversed string: ";

    // Pop characters to obtain the reverse.
    while (top != -1)
        cout << stackArr[top--];

    cout << endl;

    return 0;
}
