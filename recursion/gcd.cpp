#include <iostream>
using namespace std;

int findGCD (int m , int n ){
    if(m < n){
        return findGCD(n , m);
    }
    if( m % n == 0 ){
        // we have found the gcd
        return n ;
    }
    return findGCD(n , m % n);
}

int main(){
    int a , b ;
    cout << "Enter two number to find GCD , "<<endl;
    cout << "Enter a " ;
    cin >> a ;
    cout << "Enter b " ;
    cin >> b ;


    int gcd = findGCD(a , b);

    cout << "The GCD number is " << gcd ;
    return 0;
}