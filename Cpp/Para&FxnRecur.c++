#include<iostream>
using namespace std;

//parameterized function to print name 'n' times using recursion

// void printName(string name, int n){
//     if(n <= 0){
//         return;
//     }
//     cout << name << endl;
//     printName(name, n - 1); 

// }
// int main(){
//     string name;
//     int n;
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Enter the number of times to print your name: ";
//     cin >> n;
//     printName(name, n);
//     return 0;
// }

// int numsum(int n,int m){
//     if(n == 0){
//         return m;
//     }else if(m == 0){
//         return n;
//     }else{
//         return numsum(n - 1, m + 1);
//     }

// }

// How It Works (Conceptually):
// We are adding 1 to n and subtracting 1 from m, so eventually m becomes 0, and n has increased m times.

// int main(){
//     int n, m;
//     cout << "Enter two numbers: ";
//     cin >> n >> m;
//     cout << "Sum of " << n << " and " << m << " is: " << numsum(n, m) << endl;
//     return 0;
// }


//function recursion to sum of n numbers

// int sum(int n){
//     if(n<=0){
//         return 0;
//     }else{
//         return n + sum(n-1);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n)<<endl;
//     return 0;
// }


//reverse an array using recursion

// ✔ Recursive Approach – The function recursively swaps elements from both ends until fully reversed.
// ✔ In-Place Reversal – No extra memory is used; only swaps within the original array.
// ✔ Base Condition Stops Recursion – When start >= end, the process stops.

// void reversearray(int arr[],int start, int end){
//     if(start >= end){
//         return;
//     }
//     swap(arr[start], arr[end]);
//     reversearray(arr, start + 1, end - 1);
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     cout << "Original array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     reversearray(arr, 0, n - 1);

//     cout << "Reversed array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


//checking string is palindrome or not using recursion

bool ispal(string s, int start, int end){
    if(start>=end){
        return true;
    }else if(start < end && s[start] == s[end]){
        return ispal(s,start+1,end-1);
    }
}
int main(){
    string s;
    cout << "Enter a string: ";
    cin >>s;
    int n = s.length();
    if(ispal(s, 0, n - 1)){
        cout << "The string is a palindrome." << endl;
    }else{
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}