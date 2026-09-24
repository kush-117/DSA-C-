// 8. Write a C++ program to implement all five sorting algorithms: Bubble, Insertion, Selection, 
// Merge, and Quick Sort.
#include <iostream>
using namespace std;

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void copyArray(int source[], int destination[], int n) {
    for (int i = 0; i < n; i++)
        destination[i] = source[i];
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

void mergeArrays(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        mergeArrays(arr, left, mid, right);
    }
}

int partitionArray(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partitionArray(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int original[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> original[i];

    int a[n], b[n], c[n], d[n], e[n];

    copyArray(original, a, n);
    copyArray(original, b, n);
    copyArray(original, c, n);
    copyArray(original, d, n);
    copyArray(original, e, n);

    bubbleSort(a, n);
    insertionSort(b, n);
    selectionSort(c, n);
    mergeSort(d, 0, n - 1);
    quickSort(e, 0, n - 1);

    cout << "\nBubble Sort : ";
    display(a, n);

    cout << "Insertion Sort: ";
    display(b, n);

    cout << "Selection Sort: ";
    display(c, n);

    cout << "Merge Sort    : ";
    display(d, n);

    cout << "Quick Sort    : ";
    display(e, n);

    return 0;
}