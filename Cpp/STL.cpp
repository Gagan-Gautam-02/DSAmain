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
        int n;
        cin >> n;
        vector<int> vec = {1,2,3,4,5};
        vec.push_back(6);
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

        vector<int> vec2;
        for(int i = 0; i <n; i++){
            int value;
            cin >> value;
            vec2.push_back(value);
        }

        //iterator
        int sum = 0;
        for(auto it = vec2.begin(); it != vec2.end(); it++){
            sum += *it;
        }
        cout << "\nSum of vector elements: " << sum << endl;
        //sort
        sort(vec2.begin(), vec2.end());
        cout << "Sorted vector: ";
        for(auto it = vec2.begin(); it != vec2.end(); it++){
            cout << *it << " ";
        }
        cout << endl;

        //set
        set<int> s;
        for(int i = 0; i < n; i++){
            int value;
            cin >> value;
            s.insert(value);
        }
        cout << "Set elements: ";
        for(auto it = s.begin(); it != s.end(); it++){
            cout << *it << " ";
        }
        cout << endl;

       
        return 0;
    }
