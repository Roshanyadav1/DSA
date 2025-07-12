#include <bits/stdc++.h>
using namespace std;

//  Only vector CRUD operations 

int main(){
    vector<int> v1 = { 1,2,3,4,5};

    //iteration
    for(int v : v1){
        cout << v << endl;
    }

    // remove element
    v1.pop_back();
    v1.push_back(10);

    // accessing element
    // modifying element 
    v1[0] = 20;
    
    cout << "After modifying the element are :" << endl;

    // after removing last element
    for(int v : v1){
        cout << v << endl;
    }

    return 0;
}