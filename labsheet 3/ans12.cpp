// 12. Write a C++ program to sort an array in ascending order and then in descending order using a 
// sorting algorithm of your choice. 
#include <iostream>
using namespace std;

void bubbleSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr1[n], arr2[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    bubbleSortAscending(arr1, n);
    bubbleSortDescending(arr2, n);

    cout << "\nAscending: ";
    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";

    cout << "\nDescending: ";
    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";

    return 0;
}