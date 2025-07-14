#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 0 , b = 1 , c ;
    cout << "Enter the max number to find fabonacci series till n number : " << endl;
   cin >> c;
    // 0 , 1 , 1 , 2 , 3 , 5 

    while(c--){
        cout << a ;
        int temp = a;
        a = b;
        b = temp + b;
    }

    return 0;
}