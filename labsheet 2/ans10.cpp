// 10. Write a C++ program to implement Quick Sort and display the array after each partition. 
#include <iostream>
using namespace std;

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int partitionArray(int arr[], int low, int high, int n) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    cout << "After partition with pivot " << pivot << ": ";
    display(arr, n);

    return i + 1;
}

void quickSort(int arr[], int low, int high, int n) {
    if (low < high) {
        int p = partitionArray(arr, low, high, n);

        quickSort(arr, low, p - 1, n);
        quickSort(arr, p + 1, high, n);
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

    quickSort(arr, 0, n - 1, n);

    cout << "Final Sorted Array: ";
    display(arr, n);
 
    return 0;
}