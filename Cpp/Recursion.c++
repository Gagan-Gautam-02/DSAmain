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

void walk(int steps);
    int main(){
        walk(5);
        return 0;
    }
    
    void walk(int steps){
        for(int i = 0; i<steps; i++){
            cout << "Step " << endl;
        }
    }