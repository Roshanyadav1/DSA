#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, string> um;
    um[5] = "hello";
    um[6] = "World";
    um[7] = "how";
    um[8] = "Are";
    um[9] = "You";

    for(auto &m : um){
        cout << m.first << " : " << m.second << endl;
    }

    return 0;
}