#include<iostream>
using namespace std;
 
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array

    cout << "Array elements using pointer: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // Accessing elements using pointer arithmetic
    }
    cout << endl;

    cout << "Array elements using array notation: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "; // Accessing elements using array notation
    }
    cout << endl;

    return 0;
}