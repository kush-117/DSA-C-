// 15. Write a C++ program to compare Linear Queue and Circular Queue in terms of space utilization and 
// operations.


#include <iostream>
using namespace std;

int main() {
    cout << "LINEAR QUEUE vs CIRCULAR QUEUE\n\n";

    cout << "Linear Queue:\n";
    cout << "1. Rear moves only forward.\n";
    cout << "2. Deleted spaces may remain unused.\n";
    cout << "3. May cause false overflow.\n";
    cout << "4. Enqueue and dequeue are O(1).\n\n";

    cout << "Circular Queue:\n";
    cout << "1. Rear wraps around using modulo.\n";
    cout << "2. Reuses deleted spaces.\n";
    cout << "3. Uses array space efficiently.\n";
    cout << "4. Enqueue and dequeue are O(1).\n";

    return 0;
}
