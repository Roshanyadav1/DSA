// https://www.youtube.com/watch?v=_lC3Wb5di2s&list=PLpIkg8OmuX-Kqkb8DqDe_4-Tiav6ilS_L&index=2
// This above is the second in the playlist 
// clang++ main.cpp -o main

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int arr[] = { 0 , 0 , 0 , 0 , 0 , 0};
    int arr2[][3] = {{0 , 5 , 9} , {2 , 4 , -3}};

    int size1 = sizeof(arr)/sizeof(arr[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    for(auto &query : arr2){
        int l = query[0];
        int r = query[1];
        int x = query[2];

        // changing the version of sheet
        arr[l] = x;
        if(r+1 < size1){
            arr[r]=-x;
        };
    }

    // cummulative sum 
    for(int i = 1 ; i < size1 ; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    cout << "After the query changes : " << endl;

    for(int i = 0 ; i < size1 ; i++){
        cout << arr[i] << endl;
    }

    return 0;
}


