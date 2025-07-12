#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s1 = { 1 , 2 , 5 , 3 , 4}; // ascending order elements
    unordered_set<int> s2 = { 2,3,6,5,8,9}; // used unorganized data

    // insert element 
    s1.insert(10); // ordered set require O(n) time to inserting element
    s2.insert(23); // unordered_set require O(1) time to insert

    // searching in set 
    if(s1.count(1)){
        cout << "1 is present in set " << endl;
    }
    // there are two method of checking the sets
    if(s2.find(5) != s2.end()){
        cout << "2 is present on unordered set" << endl;
    }

    // delete any element in the set
    s1.erase(1);
    s2.erase(8);

    // finally print the element of the sets
    cout << "After performing operation both sets are : " << endl;
    for(int s : s1) cout << s << endl;

    cout << "And the unordered_set is : " << endl;
    for(int s : s2 ) cout << s << endl;
      
    return 0;
    
}