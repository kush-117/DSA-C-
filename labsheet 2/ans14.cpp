// 14. Write a C++ program to implement any two sorting algorithms and compare their number of 
// comparisons for the same input array. 
#include <iostream>
using namespace std;

void copyArray(int source[], int destination[], int n) {
    for (int i = 0; i < n; i++)
        destination[i] = source[i];
}

long long bubbleSort(int arr[], int n) {
    long long comparisons = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;

            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    return comparisons;
}

long long insertionSort(int arr[], int n) {
    long long comparisons = 0;

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0) {
            comparisons++;

            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            } else {
                break;
            }
        }

        arr[j + 1] = key;
    }

    return comparisons;
}

long long selectionSort(int arr[], int n) {
    long long comparisons = 0;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            comparisons++;

            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[i], arr[minIndex]);
    }

    return comparisons;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int original[n], a[n], b[n], c[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> original[i];

    copyArray(original, a, n);
    copyArray(original, b, n);
    copyArray(original, c, n);

    cout << "\nBubble Sort comparisons: "
         << bubbleSort(a, n);

    cout << "\nInsertion Sort comparisons: "
         << insertionSort(b, n);

    cout << "\nSelection Sort comparisons: "
         << selectionSort(c, n);

    return 0;
}