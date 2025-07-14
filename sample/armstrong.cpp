#include <bits/stdc++.h>
using namespace std;

int main(){
    int a ;
    cout << "Enter a number to find if its armstrong or not : ";
    cin >> a ;

    int l1 = 0 ,sum =0 , sec = a , third = a;
    while(sec > 0){
        sec = sec/10;
        l1++;
    }

    while ( a > 0){
        int rem = a % 10;
        sum = sum + pow(rem , l1);
        a = a /10;
    }


    if(sum == third){
        cout << "The number is armstrong number : " << third << sum ;
    }else{
        cout << "The number is not armstrong :";
    }

    return 0;
}