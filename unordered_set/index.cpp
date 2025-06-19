#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> ust = { 3 , 2  , 5}  ;

    //insert element
    ust.insert(22);

    // iterate it
    for(int st : ust){
        cout << st << " " ;
    }

    cout << endl;
    ust.erase(2); // remove element 

    if(ust.count(3)){ // check element is present or not
        cout << "Found element " << 3 << endl;
    }

    // remove the first element
    ust.erase(ust.begin());
    for(int st : ust){
        cout << st << " " ;
    }

    cout << "The first element "   << endl;

    return 0;
}
 