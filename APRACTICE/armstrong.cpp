#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int n , count = 0 , sum = 0 ;
    
    cin >> n ;

    int dup = n ,rep = n;
    while(n--){
        n = n /10;
        count++;
    }

    while(rep){
        int rem = rep % 10 ;
        int temp = count - 1 , sum2 = rem;
        while(temp--){
            sum2 = sum2 * rem ;
        } 
        // add the sum in the original sum
        sum = sum + sum2;

        // reduce the last one number
        rep = rep / 10;
    }


    if(sum == dup){
        cout << "This is an armstrong number" << endl;
    }else{
        cout << "This is not an armstrong number " << endl;
    }


    return 0;
}