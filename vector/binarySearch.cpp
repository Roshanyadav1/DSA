// Binary	Search
//  Binary	search	is	sued	to	search	in	a	sorted	array.	Each	iteration	search	space	is
//  divided	into	half.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };

    int mid , right = 0 , left = nums.size() , searchElement;
    cout <<"Enter the element you want to search in nums array : "<< endl;
    cin >> searchElement;

    while(right < left){
        mid = (right+left) / 2;

        // if the element is smaller than the mid
        if(searchElement < nums[mid]){ 
            left = mid; // if element is smaller than mid than , the left position reduces
        }else if(searchElement > nums[mid]){
            right = mid;// if element is larger than mid than , the right position reduces
        }else{
            cout << "Element found in " << mid << " position " << endl;
            break;
        }
    }
    return 0;
}

