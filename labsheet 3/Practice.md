PRACTICE / ANALYSIS ANSWERS

1. Why is Bubble Sort called Bubble Sort?
Answer:-
After every pass, larger elements move toward the end of the array, similar to bubbles moving upward in water.

2. What is the role of the key element in Insertion Sort?
Answer:-
The key is the element currently being inserted into the already sorted portion of the array.

Example:
5 10 20 | 15
Here 15 is the key. It is inserted between 10 and 20.

3. Why does Selection Sort perform O(n²) comparisons even in the best case?
Answer:-
Selection Sort must search the complete unsorted portion to find the minimum element, even when the array is already sorted.
Therefore, the number of comparisons remains approximately:
(n-1) + (n-2) + ... + 1
which is O(n²).

4. Why is Merge Sort Divide and Conquer?
Answer:-
Merge Sort:
Divides the array into two parts.
Recursively sorts both parts.
Merges the sorted parts.
This follows the Divide and Conquer strategy.

5. Purpose of Merge operation
Answer:-
The Merge operation combines two already sorted subarrays into one sorted array.

6. What is a pivot?
Answer:-
A pivot is the element used by Quick Sort to divide the array into two partitions.
In our implementation, the last element is selected as the pivot.

7. Why can Quick Sort have O(n²) worst-case complexity?
Answer:-
When the pivot repeatedly creates extremely unbalanced partitions, the recursion becomes highly unbalanced.
For example:
[1 2 3 4 5] with the last element selected as pivot can repeatedly produce one empty partition and one partition containing almost all remaining elements.

8. Which algorithms are stable?
Answer:-
Algorithm	Stable
Bubble Sort	Yes
Insertion Sort	Yes
Selection Sort	No
Merge Sort	Yes
Quick Sort	No


9. Which sorting algorithms are in-place?
Answer:-
For the implementations used here:

Bubble Sort: Yes
Insertion Sort: Yes
Selection Sort: Yes
Quick Sort: Usually considered in-place, apart from recursion stack
Merge Sort: Standard array implementation is not fully in-place

10. Which algorithm requires O(n) additional space?
Answer:-
Merge Sort requires O(n) additional memory for the temporary arrays used during merging.

11. Merge Sort vs Quick Sort
Answer:-
Case	Merge Sort	Quick Sort
Best	O(n log n)	O(n log n)
Average	O(n log n)	O(n log n)
Worst	O(n log n)	O(n²)
Extra space	O(n)	O(log n) average
Stable	Yes	No
Technique	Divide & Conquer	Divide & Conquer


12. Bubble vs Insertion vs Selection
Answer:-
Algorithm	Basic Principle
Bubble Sort	Repeatedly compares adjacent elements and swaps them
Insertion Sort	Takes one element and inserts it into the sorted portion
Selection Sort	Finds the minimum element and places it at the beginning

These working principles correspond directly to the descriptions in the lab sheet.

Final Complexity Revision Table
Algorithm	Best	Average	Worst	Space	Stable
Linear Search	O(1)	O(n)	O(n)	O(1)	N/A
Binary Search	O(1)	O(log n)	O(log n)	O(1)	N/A
Bubble Sort	O(n)	O(n²)	O(n²)	O(1)	Yes
Insertion Sort	O(n)	O(n²)	O(n²)	O(1)	Yes
Selection Sort	O(n²)	O(n²)	O(n²)	O(1)	No
Merge Sort	O(n log n)	O(n log n)	O(n log n)	O(n)	Yes
Quick Sort	O(n log n)	O(n log n)	O(n²)	O(log n)*	No

* Quick Sort space is O(log n) for the average recursion stack as specified in the sheets.
