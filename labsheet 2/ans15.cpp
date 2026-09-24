// 15. Write a C++ program to implement any three sorting algorithms and display their Best, 
// Average, and Worst-case time complexities as comments/output.
#include <iostream>
using namespace std;

/*
Bubble Sort
Best: O(n)
Average: O(n^2)
Worst: O(n^2)
Space: O(1)

Insertion Sort
Best: O(n)
Average: O(n^2)
Worst: O(n^2)
Space: O(1)

Selection Sort
Best: O(n^2)
Average: O(n^2)
Worst: O(n^2)
Space: O(1)
*/

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;

        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    int a[5], b[5], c[5];

    for (int i = 0; i < n; i++) {
        a[i] = arr[i];
        b[i] = arr[i];
        c[i] = arr[i];
    }

    bubbleSort(a, n);
    insertionSort(b, n);
    selectionSort(c, n);

    cout << "Three sorting algorithms executed successfully.\n";
    cout << "Complexities are given in the comments above.";

    return 0;
}