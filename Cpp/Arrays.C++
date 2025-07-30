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


//reverse array

// void reverseArray(int arr[], int n){
//     int start = 0;
//     int end = n -1; //end index is n-1 because array index starts from 0 and ends at n-1
//     for(int i = 0; i<n/2; i++){ //i<n/2 because we only need to swap the first half with the second half
//         swap(arr[start], arr[end]);
//         start++;
//         end--;

//     }

// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(arr[0]); //size of array
//     reverseArray(arr, n);
//     cout << "Reversed array: "; 
//     for (int i = 0; i < n; i++){
//         cout << arr[i]<< " ";
//     }

//     return 0;
// }

//sum of all elements in an array

// int sumelms(int arr[],int n){
//     int sum = 0;
//     for(int i = 0; i<n; i++){
//         sum = sum + arr[i];
        
//     }
//     return sum;

// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int n  = sizeof(arr)/sizeof(arr[0]); //size of array
//     int sum = sumelms(arr, n);
//     cout << "Sum of all elements in the array: " << sum << endl;
//     return 0;
// }

//sum of all elements in an array using recursion

// int SumElms(int arr[],int n){
//     if(n <= 0){
//         return 0; //base case
//     }else{
//         return arr[n-1] + SumElms(arr, n-1); //recursive case
//     }
// }

//largest element in an array 

// void LargestElem(int arr[],int n){
//     int largest = arr[0];
//     for(int i = 0; i <n; i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     }
//     cout << "Largest"<< largest << endl;
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(arr[0]); //size of array
//     LargestElem(arr, n);
//     return 0;
// }
 
//second largest element in an array

//rotate array by k places

// void RotArr(int arr[], int temp,int n){
//     temp = arr[0];
//     for(int i = 0; i<n; i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]= temp;
//     return arr;
// }

// int main(){
//     int arr[]={1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int temp = 0;
//     int n = 5; //size of array
//     int k = 2; //number of places to rotate
//     for(int i = 0; i < k; i++){
//         RotArr(arr, temp, n);
//     }
// }

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k % n;  // Handle cases where k > n
//         reverse(nums.begin(), nums.end());             // Reverse entire array
//         reverse(nums.begin(), nums.begin() + k);       // Reverse first k elements
//         reverse(nums.begin() + k, nums.end());         // Reverse remaining elements
//     }
// };