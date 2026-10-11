// 3. Write a C++ program to implement Dequeue operation and demonstrate deletion from the Front. 

#include <iostream>
using namespace std;

int main() {
    int q[5] = {10, 20, 30};
    int front = 0, rear = 2;

    if (front == -1 || front > rear) {
        cout << "Queue Underflow";
    } else {
        cout << "Deleted element: " << q[front];
        front++;

        if (front > rear)
            front = rear = -1;
    }

    return 0;
}
