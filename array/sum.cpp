// Write	a	method	that	will	return	the	sum	of	all	the	elements	of	the	integer	array
//  given	array	and	its	size	as	an	argument.

#include <iostream>
using namespace std;

int main(){
    int a[10] , sum = 0;
    for(int i = 0 ; i < 10 ; i++){
        cin >> a[i];
    }

    cout << a << endl;  // print the array address
    for(int i=0; i < 10 ; i++){
        cout << "The element is :  " << a[i] << endl;
    }
    return 0;
}