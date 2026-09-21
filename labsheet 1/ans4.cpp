// 4.	WAP to print kth smallest and kth largest element of an array. Sample Input:- Arr[]={1,2,3,4,5} k=2
// Sample Output:- 2nd Smallest=2 2nd Largest=4
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Change this value to find different kth smallest and largest elements
    sort(arr, arr + n);
    cout << k << "th Smallest=" << arr[k - 1] << " " << k << "th Largest=" << arr[n - k] << endl;
    return 0;
} 