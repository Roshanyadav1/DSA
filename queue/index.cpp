#include <queue>
#include <iostream>

using namespace std;
int main(){
    queue<int> que;
    vector<int> arr = { 1, 2,3,4,5,6,7,8,9,10};

    for(auto i : arr){
        que.push(i);
    }

    for(unsigned int i=0 ; i < arr.size() ; i++){
        cout << que.front() << endl;
        que.pop();
    }
    return 0;
}