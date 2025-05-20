#include <iostream>
using namespace std;

int main(){
  int arr[] = { 1 , 2 , 3 , 4 , 5 , 6};
  int size = sizeof(arr) / sizeof(arr[0]) , largest = 0 , secondLargest = 0 ;

  for(int i = 0 ; i < size ; i++){
    if(largest < arr[i]){
        secondLargest = largest; 
        largest = arr[i];
    }
    if(arr[i] < largest && arr[i] > secondLargest){
        secondLargest = arr[i];
    }
  }

  cout << "The second largest number is : " << secondLargest << endl;
  return 0;
}