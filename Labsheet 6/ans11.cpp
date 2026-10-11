// 11. Write a C++ program to find the maximum and minimum elements in a Queue. 

#include <iostream>
using namespace std;

int main() {
    int q[5] = {25, 10, 45, 5, 30};
    int front = 0, rear = 4;

    int maximum = q[front];
    int minimum = q[front];

    for (int i = front + 1; i <= rear; i++) {
        if (q[i] > maximum)
            maximum = q[i];

        if (q[i] < minimum)
            minimum = q[i];
    }

    cout << "Maximum element: " << maximum << endl;
    cout << "Minimum element: " << minimum << endl;

    return 0;
}
