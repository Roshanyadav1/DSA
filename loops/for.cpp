#include <iostream>
using namespace std;

int main (){
    short int a ;
    cout << "Please enter the size to iterations : " << endl;
    cin >> a ;

    for(int i =0 ; i < a ; i++){
        cout << "The loop si running from zero to" << a << "  "  << i << endl;
    }

    return 0;
}
