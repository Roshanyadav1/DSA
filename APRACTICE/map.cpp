#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int ,string> mp ;
    unordered_map<int , string> ump;

    // inserting element in the map and unordered_map
    mp[1] = "first";
    mp[2] = "second";

    ump[11] = "eleven";
    ump[12] = "twelve";

    // find any element in map
    if(mp.count(2)) cout << "Key 2 is found in map" << mp[2] << endl;

    // delete the key
    mp.erase(2);

    // iteration of the map
    for(auto &m : mp){
        cout << m.first << " ---> " << m.second << endl;
    }

    for(auto &m : ump){
        cout << m.first << " ---> " << m.second << endl;
    }

    return 0;
}