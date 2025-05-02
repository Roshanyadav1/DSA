#include <iostream>
#include <vector>
using namespace std;


int printVector(vector<int> &a ){
    
    int size = a.size();
    int sum = 0;
   for(int i = 0 ; i < size ; i++){
      sum = sum + a.at(i);
   }
return sum;

}


int main(){
    vector<int> a;
    int si ;
    
    // taking the size input 
    cout << "Enter the size of the vector : " << endl;
    cin >> si ;

    // taking input from the user
   for(int i = 0 ; i < si ; i++){
    int temp ;
    cout << "Enter the data " << i << endl;
    cin >> temp ;
    a.push_back(temp);
   }


   int sum  = printVector(a);

   cout << "The sum of the vector is : " << sum ;

   return 0;
}