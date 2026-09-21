// 1.	WAP to print sum of odd and sum of even elements in an array. Sample Input:- Arr[]={1,2,3,4,5}
// Sample Output:- SumEven=6 SumOdd=9
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    cout << "SumEven=" << sumEven << " SumOdd=" << sumOdd << endl;
    
    return 0;
}