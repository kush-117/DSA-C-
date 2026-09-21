// 2.	WAP to print the sum of two unequal sizes array into third array. Sample Input:- A[]={1,2,3,4,5} B[]={2,4,6,8,10,12,14}
// Sample Output:- Sum[]={3,6,9,12,15,12,14}
#include <iostream>
using namespace std;
int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    int C[m]; // Assuming the third array can hold up to 7 elements
    for (int i = 0; i < n; i++) {
        C[i] = A[i] + B[i];
    }
    for (int i = n; i < m; i++) {
        C[i] = B[i];
    }
    cout << "Sum[]={";
    for (int i = 0; i < m; i++) {
        cout << C[i];
        if (i < m - 1) {
            cout << ",";
        }
    }
    cout << "}" << endl;

    return 0;
}
