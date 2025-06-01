#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<list>
#include<math.h>
using namespace std;

    int main(){
        vector<int> vec = {1,2,3,4,5};
        // vec.push_back(6);
        cout << "Vector elements: "<< vec.size()<< endl;
        for( int num : vec){
            cout <<num << " ";
        }
        
        list<int> lst = {1,2,3,4,5};
        lst.push_back(6);
        lst.push_front(0);
        for(int num1 : lst){
            cout << num1 << " ";
        }

        


        return 0;
    }
