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

    //reverse function : // This function reverses the digits of a number.
    int num1 = 12345;
    int revnum1 = 0;
    while(num1>0){
        revnum1 = revnum1*10 + num1%10;
        num1 /= 10;
    }
    cout << "Reversed number: " << revnum1 << endl;

    //Palindrome function : // This function checks if a number is a palindrome.
    //palindrome number is a number that remains the same when its digits are reversed.

    int num2 = 123421;
    int revnum2 = 0;
    int orgnum2 = num2; // Store the original number for comparison
    while(num2>0){
        revnum2 = revnum2*10 + num2%10;
        num2 /= 10;
    }
    if(revnum2 == orgnum2){
        cout<< "true" << endl; 
    }else{
        cout << "false" << endl;
    }
    //Armstrong number function : // This function checks if a number is an Armstrong number.
    int num3 = 153;
    int sum = 0;
    int orgnum3 = num3; 
    while(num3 > 0){
        int digit = num3 % 10;
        sum += digit * digit * digit;
        num3 /= 10;
    }
    if(sum == orgnum3){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }




    return 0;
}