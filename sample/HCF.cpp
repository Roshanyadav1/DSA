#include <bits/stdc++.h>
using namespace std;

int main(){
    int a , b ;
    cin >> a ;
    cin >> b ;

    int m1 = min(a,b);

    for(int i = m1 ; i >= 1; i--){
        if(a % i == 0 &&  b % i == 0){
            cout << "The HCF is " << i << endl;
            break;
        }
    }

    return 0;
}