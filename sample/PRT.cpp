#include <bits/stdc++.h>
using namespace std;

int main(){
    int i , p , r , t ;
    cout << "Enter the Principle , rate and time :" << endl;
    cin >> p >> r >> t ;

    cout << "The total amount is : " << endl;
    i = ( p * r * t) / 100;
    cout << i ;

    return 0;
}