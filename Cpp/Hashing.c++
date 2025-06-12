//Hashing: use to map data of arbitrary size to fixed-size values, often used in data structures like hash tables.  
// It is a technique to convert a range of key values into a range of indexes of an array.
// 🔹 Common Applications of Hashing
// - Storing unique elements (using unordered_set)
// - Key-value pairs (using unordered_map)
// - Checking for duplicates
// - Caching and lookup tables

#include <iostream>
#include <unordered_map>
using namespace std;

// void hashFunction(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         int hashIndex = arr[i] % size;
//         cout << "Element: " << arr[i] << " -> Hash Index: " << hashIndex << endl;
//     }
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Hashing the array elements:" << endl;
//     hashFunction(arr, size);

//     return 0;
// }


//1. Simple Hash Function for Integers

// int simpleHash(int key){
//     return key%10;
// }
// int main(){
//     int key = 25;
//     cout << "Hash value for " << key << " is: " << simpleHash(key) << endl;
//     return 0;
// }

// 2. Using unordered_map for Fast Lookup

int main(){
    unordered_map<string, int> hashMap;
    hashMap["some01"]= 1;
    hashMap["some02"]= 2;
    hashMap["some03"]= 3;

    cout << "Hash Map Contents:" << hashMap["some01"] << endl;
    cout << "Hash Map Contents:" << hashMap["some02"] << endl;
    cout << "Hash Map Contents:" << hashMap["some03"] << endl;
    return 0;
    
}