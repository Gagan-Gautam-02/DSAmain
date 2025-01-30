// #include<iostream>
#include<bits/stdc++.h>//contain all liberary functions
using namespace std;

// int main(){
//    cout << "some text\n";
//    cout << "some text\n";
   // std::cout << "some text\n";//std use to print without namespace;
   // int x,y;
   // cin >> x >> y;
   // cout << "value: " << x << "and " << y ;
   //int x = 10; // for taking long intrger use long;

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

   // int day;
   // cin >> day;
   //  switch(day){
   //     case 1: cout << "Monday"; break;
   //     case 2: cout << "Tuesday"; break;
   //     case 3: cout << "Wednesday"; break;
   //     case 4: cout << "Thursday"; break;
   //     case 5: cout << "Friday"; break;
   //     case 6: cout << "Saturday"; break;
   //     case 7: cout << "Sunday"; break;
   //     default: cout << "Invalid day";
   //  }

   // int arr[5];
   // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
   // cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];

   // int arr[3][5];
   // cin >> arr[0][0] >> arr[0][1] >> arr[0][2] >> arr[0][3] >> arr[0][4];
   // cin >> arr[1][0] >> arr[1][1] >> arr[1][2] >> arr[1][3] >> arr[1][4];
   // cin >> arr[2][0] >> arr[2][1] >> arr[2][2] >> arr[2][3] >> arr[2][4]; 
   // cout << arr[1][3];

   // string s = "some text";
   // int len = s.size();
   // cout << len;
   // //loop
   // cout << "some" << endl;
   // for(int i = 0; i<=10; i = i+1){
   //    cout << "sometext" << endl;
   // }
   // // cout << i << endl;

   // int i = 1;
   // while(i<=5){
   //    cout << "some text" << endl;
   //    i++;
   // } 

   // functions

   // void PrintName(){
   //    cout << "some text";
   // }

   // int main(){
   //    string name;
   //    cin >> name;
   //    PrintName();
   //    return 0;
   // }


// void PrintName(string name){
//       cout << "some text" << name << endl;
//    }

//    int main(){
//       string name;
//       cin >> name;
//       PrintName(name);
//       return 0;
//    }


// int sum(int num1, int num2){
//    int num3 = num1 + num2;
//    return num3;
// }

// int main(){
//    int num1, num2;
//    cin >> num1 >> num2;
//    int res = sum (num1, num2);
//    cout << res;

//    return 0;
// }


void something(int num){
   cout << num << endl;
   num += 10;
   cout << num << endl;
   num +=5;
   cout << num << endl;
}

int main(){
   int num = 10;
   something(num);
   cout << num;
   return 0;
}