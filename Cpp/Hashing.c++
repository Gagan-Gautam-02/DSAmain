//Hashing: use to map data of arbitrary size to fixed-size values, often used in data structures like hash tables.  
// It is a technique to convert a range of key values into a range of indexes of an array.
#include <iostream>
using namespace std;

void hashFunction(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        // Simple hash function: using modulo operator
        int hashIndex = arr[i] % size;
        cout << "Element: " << arr[i] << " -> Hash Index: " << hashIndex << endl;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Hashing the array elements:" << endl;
    hashFunction(arr, size);

    return 0;
}