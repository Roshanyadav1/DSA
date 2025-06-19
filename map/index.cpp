// Create: map<int,string> mp;  or  unordered_map<int,string> ump; .
// Insert/Update: mp[key] = val;  or  ump[key] = val; . (Note:  []  creates if absent, otherwise
// updates existing key.)
// Find: auto it = mp.find(key);
// Delete: mp.erase(key); ump.erase(key); .
// Traverse:  for(auto &p : mp) cout << p.first << ":" << p.second;


#include <bits/stdc++.h>
using namespace std; 

int main(){
    map<int,string> mp;

    mp[2] ="hello";
    mp[3] = "world";

    // finding element 
    auto it = mp.find(2);

    mp.erase(3);

    for(auto &p : mp){
        cout << p.first << " : " << p.second << endl; 
    }

    return 0;
}