// first and last digit of an number

#include <iostream>
using namespace std;

int main(){
   int a = 0 , b = 1 , sum = 0 , n = 10;

   while(n--){
    cout << a << endl;
    sum = a + b ;
    a = b;
    b = sum;
  }

   return 0;    
}