#include<iostream>
using namespace std;

//parameterized function to print name 'n' times using recursion

void printName(string name, int n){
    if(n <= 0){
        return;
    }
    cout << name << endl;
    printName(name, n - 1); 
    
}
int main(){
    string name;
    int n;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter the number of times to print your name: ";
    cin >> n;
    printName(name, n);
    return 0;
}