// 2. Write a C++ program to implement Enqueue operation and demonstrate insertion at the Rear. 

#include <iostream>
using namespace std;

int main() {
    int q[5], front = -1, rear = -1;
    int value = 25;

    if (rear == 4) {
        cout << "Queue Overflow";
    } else {
        if (front == -1)
            front = 0;

        q[++rear] = value;
        cout << value << " inserted at Rear\n";
    }

    cout << "Rear element: " << q[rear];
    return 0;
}
