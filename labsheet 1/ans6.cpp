// 6.	WAP to find duplicate elements in an array. Sample Input:- Arr[]={1,4,3,4,5,1}
// Sample Output:- 1 4
#include <iostream>
using namespace std;
int main() {
    int Arr[] = {1, 4, 3, 4, 5, 1};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    cout << "Duplicate elements are: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (Arr[i] == Arr[j]) {
                cout << Arr[i] << " ";
                break; // To avoid printing the same duplicate multiple times
            }
        }
    }
    return 0;
}   