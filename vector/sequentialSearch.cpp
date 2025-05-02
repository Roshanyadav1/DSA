#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int size ;

    // taking the input 
    cout << "Enter the size of the vector : " << endl;
    cin >> size ;


    // taking the vector input
    for(int i=0 ; i < size ; i++){
        int temp;
        cout << "Enter the data for " << i << endl;
        cin >> temp;
       vec.push_back(temp);
    }

    int searchElement ;
    cout << "Enter the search element you want to search :: " << endl;
    cin >> searchElement ;

    bool isElementFound = false;
    for(int i=0 ; i < size ; i++){
        if(vec.at(i) == searchElement ){
            isElementFound = true;
            cout << "Element found is the element of " << vec.at(i) ;
        }
    }

    if(!isElementFound){ 
      cout << "Element is not found in the array LL" << endl;
    }

}