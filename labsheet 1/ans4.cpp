// 4.	WAP to print kth smallest and kth largest element of an array. Sample Input:- Arr[]={1,2,3,4,5} k=2
// Sample Output:- 2nd Smallest=2 2nd Largest=4
#include <iostream>
#include <iostream>
using namespace std;

int main() {
    // Sample Input
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculates the size of the array
    int k = 2;

    // Check for invalid k
    if (k > n || k <= 0) {
        cout << "Invalid value of k" << endl;
        return 0;
    }

    // Basic Bubble Sort to arrange array in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Kth smallest is at index k-1
    int kthSmallest = arr[k - 1];

    // Kth largest is at index n-k
    int kthLargest = arr[n - k];

    // Sample Output
    cout << k << "nd Smallest=" << kthSmallest << endl;
    cout << k << "nd Largest=" << kthLargest << endl;

    return 0;
}
