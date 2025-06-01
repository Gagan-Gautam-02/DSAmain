#include<iostream>
#include<array>
#include<math.h>
using namespace std;

int main(){
    //power function : // This function calculates n raised to the power of m
    int n = 3,m = 4;
    int result = pow(n, m);
    cout<< result << endl;
    
    //sqrt function : // This function calculates the square root of a number.
    int num = 16;
    double squareRoot = sqrt(num);
    cout<< squareRoot << endl;

    //min and max functions : // These functions return the minimum and maximum values from a list of numbers.
                              //only for two numbers  
    int a = 5, b = 10;
    cout << "Minimum: " << min(a, b) << endl;
    cout << "Maximum: " << max(a, b) << endl;

    //swap function : // This function swaps the values of two variables.
    int x = 1, y = 2;
    swap(x,y);
    cout<<x << " " << y << endl;

    


}