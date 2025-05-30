//at rate at which incrases wrt the input size.
//notation (Big O notation) is used to describe the upper bound of the time complexity.
//reason : worst case scenario., avoid constants and lower order terms.
//speed complexity is a measure of the amount of time an algorithm takes to complete as a function of the length of the input.
//auxiliary space complexity is the amount of extra space or temporary space used by an algorithm, not including the space taken by the input itself.
//input space complexity is the total space required by the algorithm, including both the input and auxiliary space.

#include<iostream>
using namespace std;

int main(){
     int n;
        cout << "Enter a number: ";
        cin >> n;
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= n-i; j++){
                cout << "*";
            }cout << endl;
        }
        
        return 0;
}