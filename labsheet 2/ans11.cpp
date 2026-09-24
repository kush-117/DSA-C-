// 11. Write a menu-driven C++ program that allows the user to choose Linear Search or Binary 
// Search for a given array. 
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

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
    int n, choice, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n1. Linear Search";
    cout << "\n2. Binary Search";
    cout << "\nEnter choice: ";
    cin >> choice;

    cout << "Enter key: ";
    cin >> key;

    int result;

    if (choice == 1)
        result = linearSearch(arr, n, key);
    else if (choice == 2)
        result = binarySearch(arr, n, key);
    else {
        cout << "Invalid choice.";
        return 0;
    }

    if (result != -1)
        cout << "Element found at position " << result + 1;
    else
        cout << "Element not found.";

    return 0;
}