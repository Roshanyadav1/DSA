#include <iostream>
using namespace std;


int main(){
    int arr[] = { 77 , 8 , 5 , 8 , 6 , 88 };
    int size = sizeof(arr)/sizeof(arr[0]) , minimum = arr[0];

    for(int i = 0 ; i < size ; i++){
        if(minimum > arr[i]){
            minimum = arr[i];
        }
    }

    cout << "The minumum element of the array is " << minimum ;
    return 0;
}