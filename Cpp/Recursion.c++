//Recursion in C++ is a powerful technique where a function calls itself to solve a problem.
// It is often used to solve problems that can be broken down into smaller, similar subproblems.
#include<iostream>
using namespace std;

// int print(){
//     cout<< "sometext"<<endl;
//     print();

// };

// int main(){
//     print();
//     return 0;
// }

// void walk(int steps);
//     int main(){
//         walk(5);
//         return 0;
//     }
    
//     void walk(int steps){
//         for(int i = 0; i<steps; i++){
//             if(i == steps - 1){
//                 cout << "Reached the destination!" << endl;
//                 return; // Base case: stop when the last step is reached
//             }
//             cout << "Step " << endl;
//         }
//     }

// print name 'n' times using recursion

// void printName(string name, int n){
//     if(n<=0)
//         return;
//         cout << name << endl; 
//         printName(name, n-1); 
// }

// int main(){
//     string name;
//     int n;
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Enter the number of times to print your name: ";
//     cin >> n;
//     printName(name,n);
//     return 0;
// }

//exapmle of recursion to calculate factorial of a number

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n * factorial(n-1); 

// }

// int main(){
//     int number;
//     cout<< "Enter a number to calculate its factorial: ";
//     cin >> number;
//     if(number < 0){
//         cout << "Factorial is not defined for negative numbers." << endl;
//     } else {
//         cout << "Factorial of " << number << " is: " << factorial(number) << endl;
//     }
//     return 0;
    
// }


// int digitSum(int n) {
//     if (n == 0) return 0;
//     return n % 10 + digitSum(n / 10);
// }

// int main() {
//     int n = 1234;
//     cout << "Sum of digits of " << n << " is " << digitSum(n);
//     return 0;
// }


// int power(int a, int b) {
//     if (b == 0) return 1;
//     return a * power(a, b - 1);
// }

// int main() {
//     int a = 2, b = 4;
//     cout << a << "^" << b << " = " << power(a, b);
//     return 0;
// }

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }else{
//         return n*factorial(n-1);
//     }
// }
// int main(){
//     int num = 5;
//     cout << "Factorial of " << num << " is: " << factorial(num) << endl;
//     return 0;
// }

int SumArray(int arr[], int n){
    if(n<=0){
        return 0;
    }else{
        return arr[n-1]+ SumArray(arr, n-1);
    }
}
int main(){
    int arr[5];
    cout << "Enter elem";
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }
    int size= sizeof(arr)/sizeof(arr[0]);
    cout << "Sum of array elements: " << SumArray(arr, size) << endl;
    return 0;

// - sizeof(arr) gives the total memory size of the array (in bytes).
// - sizeof(arr[0]) gives the size of one element (in this case, an int).
// - So, dividing these gives the count: 5 in this example.
}


