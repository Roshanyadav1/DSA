#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int a = 0 , b = 1 ;

    for(int i = 0 ; i < n ; i++){
        cout << a << endl;
        int temp = a + b ;
        b = a;
        a = temp;
    }

    return 0;
}
