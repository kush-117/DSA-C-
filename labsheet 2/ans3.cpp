// 3. Write a C++ program to compare Linear Search and Binary Search for a given array and display 
// their results. 
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter key: ";
    cin >> key;

    int linearResult = linearSearch(arr, n, key);
    int binaryResult = binarySearch(arr, n, key);

    cout << "\nLinear Search Result: ";
    if (linearResult != -1)
        cout << "Found at position " << linearResult + 1;
    else
        cout << "Not Found";

    cout << "\nBinary Search Result: ";
    if (binaryResult != -1)
        cout << "Found at position " << binaryResult + 1;
    else
        cout << "Not Found";

    return 0;
}