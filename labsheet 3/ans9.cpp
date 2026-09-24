// 9. Take the same input array and sort it using Bubble Sort, Insertion Sort, and Selection Sort. 
// // Compare the number of comparisons and swaps. 
#include <iostream>
using namespace std;

struct Result {
    long long comparisons;
    long long swaps;
};

Result bubbleSort(int arr[], int n) {
    Result r = {0, 0};

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            r.comparisons++;

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                r.swaps++;
            }
        }
    }

    return r;
}

Result insertionSort(int arr[], int n) {
    Result r = {0, 0};

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0) {
            r.comparisons++;

            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                r.swaps++;
                j--;
            } else {
                break;
            }
        }

        arr[j + 1] = key;
    }

    return r;
}

Result selectionSort(int arr[], int n) {
    Result r = {0, 0};

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            r.comparisons++;

            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            r.swaps++;
        }
    }

    return r;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int original[n], a[n], b[n], c[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> original[i];
        a[i] = original[i];
        b[i] = original[i];
        c[i] = original[i];
    }

    Result bubble = bubbleSort(a, n);
    Result insertion = insertionSort(b, n);
    Result selection = selectionSort(c, n);

    cout << "\nAlgorithm\tComparisons\tSwaps\n";

    cout << "Bubble\t\t"
         << bubble.comparisons << "\t\t"
         << bubble.swaps << endl;

    cout << "Insertion\t"
         << insertion.comparisons << "\t\t"
         << insertion.swaps << endl;

    cout << "Selection\t"
         << selection.comparisons << "\t\t"
         << selection.swaps << endl;

    return 0;
}