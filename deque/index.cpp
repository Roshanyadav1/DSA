// create: deque<int> dq; .
// Push/Pop: dq.push_back(x); dq.push_front(y); dq.pop_back(); dq.pop_front(); .
// Access: dq[i]  or  dq.at(i) .
// Traverse:  As with vector, but can push/pop at both ends.

#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;

    deque<int> dq2(3, 4); // create deque with 3 length and its initial value is 4

    dq.push_back(10);
    dq.push_back(20);

    dq.push_front(50);
    dq.push_front(60);

     // Deleting from the back and front
    dq.pop_back();
    dq.pop_front();
    
    for(auto q : dq){
        cout << q << endl;
    }

    return 0;
}