#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1;
    while(1){
        int a;
        cin >> a ;
        
        if(a == 0){
            break;
        }
        v1.push_back(a);
    }
    int sum = 0;
    for(int v : v1){
        sum = sum + v;
    }
    cout << "The sum of the values is " << sum << endl;
    return 0;
}