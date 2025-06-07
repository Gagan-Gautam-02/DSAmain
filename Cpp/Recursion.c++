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

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1); 

}

int main(){
    int number;
    cout<< "Enter a number to calculate its factorial: ";
    cin >> number;
    if(number < 0){
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << number << " is: " << factorial(number) << endl;
    }
    return 0;
    
}