#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1 = { 0 , 4 , 2, 3, 1,2, 5,3,1};
    vector<vector<int>> v2 = {{0,4,3},{1,4,4},{3,8,5},{4,7,4}};
    bool isZero = true;

    for(auto &query : v2){
        int left = query[0];
        int right = query[1];
        int valueToDecrease = query[2];
      

        for(int i = left ; i <= right ; i++){
            int temp = v1[i] - valueToDecrease;
            if(temp < 0){
                v1[i]=0;
            }else{
                v1[i]=temp;
            }
        }
    }

    for(int i = 0 ; i < v1.size() ; i++){
        if(v1[i] > 0){
            isZero = false;
            break;
        }
    }

    if(isZero){
        cout << "The array is empty : " << endl;
    }else{
        cout << "The array is not empty : " << endl;
    }

    return 0;
}