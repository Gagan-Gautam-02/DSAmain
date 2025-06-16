#include<iostream>
#include<unordered_map>
using namespace std;

//selection sort

// void selsort(int arr[], int n){
//     for(int i = 0; i < n - 1; i++){
//         int minIndex = i;
//         for(int j = i + 1; j < n; j++){
//             if(arr[j] < arr[minIndex]){
//                 minIndex = j;
//             }

//         }
//         if(minIndex != i){
//             swap(arr[i], arr[minIndex]);
//         }

//     }

// }

// int main(){
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Original array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     selsort(arr, n);
//     cout << "Sorted array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Bubble Sort

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }

//     }

// }

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Original array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     bubbleSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Insertion Sort
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
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
