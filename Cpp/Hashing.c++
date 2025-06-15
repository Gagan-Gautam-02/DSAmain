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

// int main(){
//     unordered_map<string, int> hashMap;
//     hashMap["some01"]= 1;
//     hashMap["some02"]= 2;
//     hashMap["some03"]= 3;

//     cout << "Hash Map Contents:" << hashMap["some01"] << endl;
//     cout << "Hash Map Contents:" << hashMap["some02"] << endl;
//     cout << "Hash Map Contents:" << hashMap["some03"] << endl;
//     return 0;
    
// }


//finding common elements in two arrays

void findCoElm(int arr1[], int arr2[]){
    unordered_map<int,int> hashMap;
    for(int i = 0; i<5; i++){
        hashMap[arr1[i]]++;
    }
    for(int i = 0; i<5; i++){
        if(hashMap[arr2[i]] > 0){
            cout << "Common Element: " << arr2[i] << endl;
            hashMap[arr2[i]] = 0; // To avoid duplicates
        }
    }
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};

    findCoElm(arr1, arr2);

    return 0;
}
}
}

