#include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    // cin >> x;
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end) {
        if (arr[mid] == x) {
            cout << "Element found at index " << mid;
            break;
        }
        if (arr[mid] < x) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if (start > end) {
        cout << "Element not found in the array";
    }
    return 0;
}