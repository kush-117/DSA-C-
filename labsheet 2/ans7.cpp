// 7. Write a C++ program to implement Selection Sort in ascending order. Display the minimum 
// element selected in each pass.
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        cout << "Minimum selected in Pass "
             << i + 1 << ": " << arr[minIndex] << endl;

        swap(arr[i], arr[minIndex]);
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);

    cout << "Sorted Array: ";
    display(arr, n);

    return 0;
}