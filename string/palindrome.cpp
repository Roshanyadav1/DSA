#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s ;

    int len = s.size() -1 , flag = true;
    for(int i = 0 ,j = len  ; i < j ; i++, j-- ){
        if(s[i] != s[j]){
            flag = false;
            cout << "The string is not palindrome" ;
            break;
        }
    }
    if(flag){
        cout << "The string is palindrome" ;
    }

    return 0;
}