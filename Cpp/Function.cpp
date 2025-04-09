
#include<iostream>
using namespace std;

int Add(int a, int b){
    return a + b;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << Add(a, b) << endl;
    return 0;
}