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

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }

    }

}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
