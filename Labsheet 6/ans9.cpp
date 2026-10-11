// 9. Write a C++ program to count the number of elements currently present in a Queue. 

#include <iostream>
using namespace std;

int main() {
    int q[5] = {10, 20, 30, 40};
    int front = 0, rear = 3;
    int count = 0;

    if (front != -1) {
        for (int i = front; i <= rear; i++)
            count++;
    }

    cout << "Number of elements: " << count;
    return 0;
}
