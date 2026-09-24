// 15. Write a C++ program to test Quick Sort on sorted, reverse-sorted, and randomly arranged arrays 
// and observe the effect of pivot selection. 
#include <iostream>
using namespace std;

long long comparisons;

int partitionArray(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        comparisons++;

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

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int sorted[n], reverseArr[n], randomArr[n];

    cout << "Enter random array: ";

    for (int i = 0; i < n; i++)
        cin >> randomArr[i];

    for (int i = 0; i < n; i++) {
        sorted[i] = i + 1;
        reverseArr[i] = n - i;
    }

    comparisons = 0;
    quickSort(sorted, 0, n - 1);
    long long sortedComparisons = comparisons;

    comparisons = 0;
    quickSort(reverseArr, 0, n - 1);
    long long reverseComparisons = comparisons;

    comparisons = 0;
    quickSort(randomArr, 0, n - 1);
    long long randomComparisons = comparisons;

    cout << "\nSorted Array Comparisons: "
         << sortedComparisons;

    cout << "\nReverse-Sorted Array Comparisons: "
         << reverseComparisons;

    cout << "\nRandom Array Comparisons: "
         << randomComparisons;

    cout << "\n\nObservation: Last-element pivot selection can produce "
            "highly unbalanced partitions for some ordered inputs.";

    return 0;
}