//Arrays: data structures that store multiple values of the same  type.
// Arrays are fixed-size, meaning the size must be known at compile time. 

#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     int n;
//     cin>>n; 
//     cout<<"Enter the size of the array: "<<n<<endl;
//     int arr[n];
//     for(int i = 0; i <n; i++){
//         cin>>arr[i]; 
//        cout<<arr[i]; 
//     }
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" "; 
//     }

//     return 0;
// }

// class IntArray{
//     private:
//     vector<int> arr;

//     public:
//     void ReadSize(){
//         int n;
//         cout << "Enter the size of the array: ";
//         cin >> n;
//         if(n<=0){
//             cout<< "Size must be positive." << endl;
//         }else{
//             arr.resize(n); 
//             cout<< "size of array is: " << n << endl;
//         }
//     };

//     void ReadElements(){
//         if(arr.size() ==0){
//             cout<<"Array is empty.";
//         }else{
//             for(int i = 0; i<arr.size();i++){
//                 cout<< "Enter element " << i+1<< ": ";
//                 cin >> arr[i];
//             }
//         }
//     };

//     void Print(){
//         cout<< "Array elements: ";
//         for(int j = 0; j <arr.size(); j++){
//             cout << arr[j]<< " ";
//         }
//     };

//     void LargestElem(){
//         int Largest = arr[0];
//         for(int i = 1; i < arr.size(); i++){
//             if(arr[i] > Largest){
//                 Largest = arr[i];
//             }
//         }
//         cout<< "\nLargest elem :"<< Largest << endl;
//     };

//     void SecLargeElem(){
        
//     }

// };

// int main() {
//     IntArray myArray;
//     myArray.ReadSize();
//     myArray.ReadElements();
//     myArray.Print();
//     myArray.LargestElem();
//     return 0;
// }

