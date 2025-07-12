#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> qu;

    // inserting in the queue
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);

    cout << " The front element is : " << qu.front() << endl;

    // remove the element
    qu.pop();

    // iteration 
    while(!qu.empty()){
        cout << " Dequeing  : " << qu.front() << endl;
        qu.pop(); 
    }

    return 0;
}