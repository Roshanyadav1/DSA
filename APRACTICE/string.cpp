#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "hello";

    // add new charater , append
    s += " world";

    cout << s << endl;

    // finding index of any word or string
    size_t idx = s.find("world");

    // if string found 
    if(idx != string::npos){
        cout << " World found at index " << idx << endl;
    }

    // replace the string ( starting , count , adding )
    s.replace(6 , 5 , "hello");

    cout << "After replace " << s << endl;
    return 0;
}