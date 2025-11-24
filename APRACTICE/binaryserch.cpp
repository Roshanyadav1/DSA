#include <iostream>
#include <vector>
using namespace std;

int find(vector<int>a, int n) {
    int i = 1, j = n;
    int x = 5, k ;
    do {
        k = (i + j) / 2;

        cout << "K is   " << k << endl;

        if (a[k] < x) i = k + 1;
        else j = k;
    } while (a[k] != x && i < j);
    cout <<  "Final k is " << k << endl;
    if (a[k] == x)
        cout << "x is in the array" << endl;
    else
        cout << "x is not in the array" << endl;
    return 0;
}


int main(){
    vector<int> v1 = { 1 , 2 , 3 , 4 , 5 } ;
    int n  = find(v1 , 4);
    cout << n << " The numbser is " << endl;

    return 0;
}