//  7. Print	alternate	elements	in	an	array.

#include <iostream>

int main(){
    int arr[] = { 1, 2 , 3 , 4 , 5 ,6 ,7,8,9,10,11,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    // std::cout << "The size is : " << size << std::endl;

    int i = 0 , j = size - 1 ;
    while(i < j){
        // i forget to add the arr[i] , i just put i there 
        // silly mistake
      std::cout << "Low : "<< arr[i] << "  ---  High : " << arr[j] << std::endl;
      i++;
      j--;
    }

    return 0;
}