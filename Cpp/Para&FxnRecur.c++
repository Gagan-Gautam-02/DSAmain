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

