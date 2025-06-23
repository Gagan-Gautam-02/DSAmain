//Quick sort algo : Quick Sort is a highly efficient, divide-and-conquer sorting algorithm that works by selecting a pivot element and partitioning the array around it. Here's a detailed breakdown of how it works in C++:
// Case                      Time Complexity                 Space Complexity


// Best / Avg                    O(n log n)                   O(log n)

// Worst                          O(n2)                      O(log n)



#include <iostream>
#include <algorithm>
using namespace std;

#include <iostream>
using namespace std;

// Quick Sort function using Lomuto partition scheme
void quickSort(int arr[], int low, int high) {
    if (low >= high) return; // Base case: subarray has 1 or no elements

    int pivot = arr[high];   // Choose the last element as pivot
    int i = low - 1;         // Index of smaller element

    // Partitioning: place elements smaller than pivot to the left
    for (int j = low; j < high; ++j)
        if (arr[j] < pivot)
            swap(arr[++i], arr[j]);

    swap(arr[i + 1], arr[high]); // Place pivot in correct position
    int pi = i + 1;              // Partition index

    // Recursively sort elements before and after partition
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
        cout << "\n";
    quickSort(arr, 0, n - 1); // Call Quick Sort on the full array

    // Print the sorted array
    for (int i = 0; i < n; ++i)
        cout<<arr[i] << " ";
    return 0;
}

