// 5. Write a C++ program to display all elements of a Queue from Front to Rear. 

#include <iostream>
using namespace std;

int main() {
    int q[5] = {10, 20, 30, 40};
    int front = 0, rear = 3;

    cout << "Queue from Front to Rear:\n";

    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";

    return 0;
}
