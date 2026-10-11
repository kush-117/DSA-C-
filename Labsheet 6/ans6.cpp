// 6. Write a C++ program to demonstrate Queue Overflow using an array. 

#include <iostream>
using namespace std;

int main() {
    int q[3];
    int front = -1, rear = -1;

    for (int i = 1; i <= 4; i++) {
        if (rear == 2) {
            cout << "Queue Overflow while inserting "
                 << i << endl;
        } else {
            if (front == -1)
                front = 0;

            q[++rear] = i;
            cout << i << " inserted\n";
        }
    }

    return 0;
}
