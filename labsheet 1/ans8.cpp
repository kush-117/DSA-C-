// 8.	WAP to find the first repeating element in an array. Sample Input:- Arr[] = {10, 5, 3, 4, 3, 5, 6}
// Sample Output:- 5
#include <iostream>
using namespace std;
int main() {
    int Arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    int firstRepeating = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (Arr[i] == Arr[j]) {
                firstRepeating = Arr[i];
                break;
            }
        }
        if (firstRepeating != -1) {
            break;
        }
    }
    cout << firstRepeating << endl;
    
    return 0;
}