// vector official examples 

#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

void iterateVector(vector<int>&v){
    for( auto x : v){
        cout << x << endl;
    }
    cout << endl;   
}

int main(){

    vector<int> v1 = { 1 , 2, 3, 4,  5};

    // insert 
    v1.insert(v1.begin()+2, 10); // 1 , 2  , 10 , 3 , 4 , 5 
    v1.push_back(30); // 1 , 2  , 10 , 3 , 4 , 5 , 30

    // update 
    v1.at(0) = 20; // 20 , 2  , 10 , 3 , 4 , 5 , 30
    v1[1] = 30;// 20 , 30  , 10 , 3 , 4 , 5 , 30

    // delete 
    v1.pop_back(); // delete last element  // 20 , 30  , 10 , 3 , 4 , 5 
    v1.erase(find(v1.begin() , v1.end(),30)); // 20  , 10 , 3 , 4 , 5 , 

    iterateVector(v1);

    return 0;
}