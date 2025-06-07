#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , temp , start ,end; 
    vector<int> arr;
    cout << "Enter the size of array " << endl;
    cin >> n;

    for(int  i = 0 ; i < n ; i++){
        cout << "Enter data for " << i << "  : " << endl;
        cin >> temp;
        arr.push_back(temp);
    }

    for(int i = 0 , j = n -1 ; i < j ; i++ , j--){
        // reverse the whole array 
        start = arr[i];
        end = arr[j];

        arr[i] = end;
        arr[j] = start;
    }

    for(auto rev : arr){
        cout << rev << endl;
    }
    
    return 0;
}
