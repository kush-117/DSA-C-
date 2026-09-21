// 5.	WAP to print the union and intersection of two arrays. Sample Input:- A[]={1,2,3,4,5} B[]={2,4,6,8,10}
// Sample Output:- Union=1,2,3,4,5,6,8,10 Intersection=2,4
#include <iostream>
using namespace std;
int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {2, 4, 6, 8, 10};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    // Implementation for union and intersection would go here
    // This is a simple implementation; you might want to use sets or other data structures for more efficient operations
    cout << "Union=";
    for (int i = 0; i < n; i++) {
        cout << A[i] << ",";
    }
    for (int i = 0; i < m; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (B[i] == A[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << B[i] << ",";
        }
    }
    cout << endl;
    cout << "Intersection=";
    return 0;
}