#include<iostream>
#include<algorithm>
using namespace std;


void merge(int array[], int low, int middle, int high) {
    int left = low;
    int right = middle + 1;
    int temp[high - low + 1];
    int i = 0;

    while (left <= middle && right <= high) {
        if (array[left] <= array[right]) {
            temp[i++] = array[left++];
        } else {
            temp[i++] = array[right++];
        }
    }

    while (left <= middle) {
        temp[i++] = array[left++];
    }

    while (right <= high) {
        temp[i++] = array[right++];
    }

    for (int j = 0; j < i; j++) {
        array[low + j] = temp[j];
    }
}


void MergeSort(int array[],int low,int high){
    int middle;
    if (low >= high) {
        return;
    }
    middle = (low + high) / 2;
    MergeSort(array, low, middle);
    MergeSort(array, middle + 1, high);
    merge(array, low, middle, high);
} 


int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    MergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}