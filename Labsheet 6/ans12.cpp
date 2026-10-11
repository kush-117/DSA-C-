// 12. Write a C++ program to reverse the elements of a Queue. 

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    stack<int> s;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Original Queue: ";
    queue<int> temp = q;

    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    cout << "\nReversed Queue: ";

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
