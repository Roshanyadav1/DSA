// modifiers examples 
// 1. signed modifiers
// 2. unsigned 
// 3. short


#include <iostream>
using namespace std;

int main(){

    signed int a = -10 ;
    cout << "The signed i.e. " << a << " the size is " << sizeof(a) << endl;

    unsigned int b = -10;
    cout << "The unsigned i.e. " << b << " the size is " << sizeof(b) << endl;

    short int c = 122;
    cout << "The short i.e. " << c << " the size is " << sizeof(c) << endl;


    // the type  conversing i.e. 
    char e = 'a' ;
    int f = 10 ;

    (int)a;

    cout << a + e << " the type converted form the character to integer " << endl;

   return 0;
 }