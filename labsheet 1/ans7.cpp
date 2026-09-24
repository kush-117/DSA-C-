// 7.	WAP to determine whether one array is subset of another array. Both arrays are not sorted, different sized and elements are distinct.
// Sample Input:- Arr1[] = {11, 1, 13, 21, 3, 7}, Arr2[] = {11, 3, 7, 1}
// Sample Output:- Yes
#include <iostream>
using namespace std;
int main() {

    int Arr1[] = {11, 1, 13, 21, 3, 7};
    int Arr2[] = {11, 3, 7, 1};
    int n1 = sizeof(Arr1) / sizeof(Arr1[0]);
    int n2 = sizeof(Arr2) / sizeof(Arr2[0]);
    bool isSubset = true;
    for (int i = 0; i < n2; i++) {
        bool found = false;
        for (int j = 0; j < n1; j++) {
            if (Arr2[i] == Arr1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            isSubset = false;
            break;
        }
    }
    if (isSubset) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}