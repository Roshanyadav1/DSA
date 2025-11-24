#include <iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

bool isSortedArray (vector<int> & v1){

int n = v1.size();
for(int i = 1 ; i < n ; i++){
  if(v1[i-1] > v1[i]){
  return false; 
 }
}
return true;
}


int main(){
// check if the array is sorted or not 

vector<int> v1 = {  1 , 2 ,  4 , 10, 5 , 6 , 7 , 8  };

int isSorted = isSortedArray(v1);
if(isSorted){
  cout << "The arrray is sorted " << endl; 
}else{
  cout << "The aray is not sorted" << endl;
}

return 0;
}




// Note : 
// 2. sorted() : The time complexity of using this C++ method is O(nlogn) 
// as Python uses Timsort (hybrid of merge/insertion sort). and consumes space with complexity of O(1).

// bool isSorted(vector<int> &arr){
    
//     // is_sorted() is a built-in method
//     if(is_sorted(arr.begin(), arr.end()))
//     return true;
    
//     return false;
// }



