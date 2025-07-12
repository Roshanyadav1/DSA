#include <bits/stdc++.h>
using namespace std;

int main(){
    int a , b;

    cin >> a ;
    cin >> b;

    int m1 = min(a,b);
    int mx = max(a,b);
    for(int i = m1 ; i <= a * b ; i++){
        if(i % a == 0 && i % b == 0){
            cout << "The lcm is : " << i;
            break;
        }
    }

    return 0;
}