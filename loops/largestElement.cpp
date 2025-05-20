#include <iostream>
using namespace std;

int main(){
    int arr[] = { 1 , 5 , 99 , 88 , 88 , 77 , 66 , 33 , 52};
    int size = sizeof(arr)/sizeof(arr[0]) , largest = 0;
    for(int i = 0 ; i < size ; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    cout << "The largest element in the array is " << largest;
    return 0;
}