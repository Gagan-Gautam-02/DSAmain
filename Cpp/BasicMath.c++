#include<iostream>

using namespace std;

int main(){
    //digit count function : // This function counts the number of digits in a number.
    int num = 12345;    
    int digitCount = 0;
    while(num > 0){
        num /= 10;
        digitCount++;
    }
    cout << "Number of digits: " << digitCount << endl;
    return 0;
}