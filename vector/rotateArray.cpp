#include <iostream>
#include <vector>
using namespace std;


void rotateArray (vector<int> &nums ,int start ,int end){
    int i = start , j = end ;
    for( ; i < j ; i++ , j--){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp; 
    }
}


int main(){
    vector<int> nums ;
    int size , rotateAxis;

    cout << "Enter the size of an array " << endl;
    cin >> size ;

    // taking array as input
    for(int i =0 ; i < size ; i++){
        int temp;
        cout << "Enter array value for " << i+1 << endl;
        cin >> temp;
        nums.push_back(temp);
    }

    // now take the rotation you want  to rotate the array 
    cout << "Enter the rotation axis "<< endl;
    cin >> rotateAxis;

    // we have to rotate array 

    // rotate for the first half
    rotateArray(nums , 0 , rotateAxis - 1); // -1 because array start from -1 index 
    rotateArray(nums , rotateAxis , size - 1); // from mid to end 
    rotateArray(nums , 0 , size -1); // now rotate the whole array 

    cout << "The array is :-" << endl;
   for(int i = 0 ; i < nums.size() ; i++){
    cout << nums[i] << endl;
   }

    return 0;
}