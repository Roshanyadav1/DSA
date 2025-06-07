// 6.Print	all	the	maxima’s	in	an	array.	(A	value	is	a	maximum	if	the	value
//  before	and	after	its	index	are	smaller	than	it	is	or	does	not	exist.)
//  Hint:	
//  a)  Start	traversing	array	from	the	end	and	keep	track	of	the	max	element.
//  b)	If	we	encounter	an	element	>	max,	print	the	element	and	update	max

#include <iostream>

int main(){
    int arr[5];
    for(int i = 0 ; i < 5 ; i++){
        int temp;
        std::cout << "Enter the data " << i ;
        std::cin>> temp;
        arr[i] = temp; // i missed to put the value in array 
    };
    int max = arr[4];

    // remove the last element as largest
    for(int i = 5 - 1 ; i > 0 ; i--){
        if((arr[i] > arr[i+1] && arr[i] > arr[i-1]) && arr[i] > max){
            // both right and left are smaller than current element ;
            max = arr[i];
            std::cout << max << std::endl;
        };
    };

    std::cout << "last : " << max ;
    return 0;
}