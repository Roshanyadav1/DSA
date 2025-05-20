#include <iostream>
using namespace std;

int main(){
    int a[5][1] , sum = 0;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 1 ; j++){
            cout << "Enter " << i << j << endl;
            cin >> a[i][j];
        }
    }

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 1 ; j++){
           sum = sum + a[i][j];
        }
    }
    cout << "The sum is " << sum << endl;
    return 0;
}