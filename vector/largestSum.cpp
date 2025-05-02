// find the largest sum in continuous subarry 

#include <iostream>
#include <vector>
using namespace std;


int subArray (vector<int> &nums , int size){
  int maxNumber = 0 , countMaxNumber = 0;

  for(int i = 0 ; i < size ; i++){
    countMaxNumber = countMaxNumber + nums[i];

    // handle edge case to restrict non negetive number
    if(countMaxNumber < 0){
        countMaxNumber = 0;
    }
    if(maxNumber < countMaxNumber){
        maxNumber = countMaxNumber;
    }
  }
  return maxNumber;
}

int main(){
    vector<int> nums = {1,-2,3,4,-4,6,-14,8,-2};
    int size = nums.size();
 
    int sum = subArray(nums , size);

    cout << "The sum of the array is : " << sum << endl;
    return 0;
}

// just remeber that you have to focus on iteration only
// make one variable for the max count and the current iteration 
// when it increase , increase the maxCount as well 

// easy peasy