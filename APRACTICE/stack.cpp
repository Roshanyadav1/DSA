#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);

     // check the top
    cout << "The top element is " << st.top() << endl;
    st.pop();

    int st_size = st.size();

    while(!st.empty()){
        int ele =  st.top();
        cout << ele << endl;
        st.pop();
    }

    return 0;
}