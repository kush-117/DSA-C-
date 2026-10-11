// 10. Write a C++ program to search for a given element in a Queue. 

#include <iostream>
using namespace std;

int main() {
    int q[5] = {10, 20, 30, 40, 50};
    int front = 0, rear = 4;
    int key, position = -1;

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = front; i <= rear; i++) {
        if (q[i] == key) {
            position = i - front + 1;
            break;
        }
    }

    if (position != -1)
        cout << "Element found at position "
             << position;
    else
        cout << "Element not found";

    return 0;
}
