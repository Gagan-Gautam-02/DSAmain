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
        // for(int i = 0; i <= n; i++){
        //     for(int j = 0; j <= n-i; j++){
        //         cout << "*";
        //     }cout << endl;
        // }
        // for(int a = 0; a <= n; a++){
        //     for(int b = 0; b <= a; b++){
        //         cout << "*";
        //     }
        //     cout << endl;
        // }
        for(int c = 0; c <= n; c++){
            for(int d = 0; d <= n-c; d++){
                cout << " ";
            }
            for(int e = 0; e <= 2*c; e++){
                cout << "*";
            }
            cout << endl;
        }
        for(int f = n; f >= 0; f--){
            for(int g = 0; g <= n-f; g++){
                cout << " ";
            }
            for(int h = 0; h <= 2*f; h++){
                cout << "*";
            }
            cout << endl;
        }
      
        for(int i = 0; i<=n;i++){
            for(int j = n; j >= i; j--){
                cout << "*";

            }
            cout << endl;
        }

        for(int k = 0; k <= n; k++){
            for(int l = 0; l <= n-k; l++){
                cout<< "*";
            }
            for(int m = 0; m <=  k; m++){
                cout << " ";
            }
            for(int o = 0; o <= n-k; o++){
                cout << "*";
            }
        }cout << endl;

        return 0;
}
