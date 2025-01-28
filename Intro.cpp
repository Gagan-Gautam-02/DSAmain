// #include<iostream>
#include<bits/stdc++.h>//contain all liberary functions
using namespace std;

int main(){
   cout << "some text\n";
   cout << "some text\n";
   // std::cout << "some text\n";//std use to print without namespace;
   // int x,y;
   // cin >> x >> y;
   // cout << "value: " << x << "and " << y ;
   int x = 10; // for taking long intrger use long;

   // //float, double;
   // float a = 4.564;
   // cout << a << endl;

   // //string and getline;
   //  string s1,s2;
   //  cin >> s1 >> s2;   
   //  cout <<s1 << s2;

   //  // char
   //  char c = 'a';
   //  cout << c << endl;

   //if else;
   // int age;
   // cin >> age;
   // if(age>=18) {
   //    cout << "you are adult\n";
   // }else{
   //    cout << "you are  not adult\n";
   // }

   // int marks;
   // cin >> marks;
   // if(marks>=90){
   //    cout << "A+";
   // }else if(marks>=80){
   //    cout << "A";
   // }else if(marks>=70){
   //    cout << "B";
   // }else{
   //    cout << "Fail";
   // } 


   // int age;
   // cin >> age;
   // if(age < 18){
   //    cout << "you are not eligible\n";

   // }else if(age <=50){
   //    cout << "eligible for job";
   // }else{
   //    cout << "eligible for retirement";
   // }

   int day;
   cin >> day;
    switch(day){
       case 1: cout << "Monday"; break;
       case 2: cout << "Tuesday"; break;
       case 3: cout << "Wednesday"; break;
       case 4: cout << "Thursday"; break;
       case 5: cout << "Friday"; break;
       case 6: cout << "Saturday"; break;
       case 7: cout << "Sunday"; break;
       default: cout << "Invalid day";
    }
    

   return 0;
}