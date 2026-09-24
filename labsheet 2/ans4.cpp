// 4. Write a C++ program to implement Bubble Sort in ascending order. Display the array after each 
// pass. 
#include <iostream>
using namespace std;

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        cout << "After Pass " << i + 1 << ": ";
        display(arr, n);

        if (!swapped)
            break;
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Original Array: ";
    display(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    display(arr, n);

    return 0;
}