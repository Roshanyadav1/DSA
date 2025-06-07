//  9. Given	a	list	of	intervals,	merge	all	overlapping	intervals.
//  Input:	{[1,	4],	[3,	6],	[8,	10]}
//  Output:	{[1,	6],	[8,	10]}


// todo : need to complete
#include <iostream>

int main(){
    int arr[] = {[1,4],	[3,	6],	[8,	10]};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < size - 1;){
        int arr2 = arr[i];
        int arr3 = arr[i+1];

        // check if the current and next array overlaps
        if(arr2[1] > arr3[0]){
            // which mean overlap occur
            arr2[1] = arr3[1];

            // remove the next index from current array
            arr.
        }
    }
}