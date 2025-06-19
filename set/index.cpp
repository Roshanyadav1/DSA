#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st = { 1 , 2 , 3 , 77 , 8 , 9 , 55};
    st.insert(23);

    // traversing 
    for(int s : st){
        cout << s  << " ";
    }
    
    cout << endl;

    // removing 
    st.erase(2);

    // searching
    if(st.count(23)){
        cout << "Found element : " << endl;
    }

    

      for(int s : st){
        cout << s  << " ";
    }

    return 0;
}
