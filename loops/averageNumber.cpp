#include <iostream>
#include<vector>

using namespace std;

// find the average number in an array
int main(){
    vector<int> a;
    int size , input , sum =0;
    float average ;
    cout << "Enter the size of an input " << endl;
    cin >> size ;
    
    for(int i = 0 ; i < size ; i++){
        cin >> input ;
        a.push_back(input);
    }

    for(int i = 0 ; i < size;i++){
       sum = sum + a.at(i);
    }
    average = sum / size;
    cout << "The average number is " << average << endl;
    return 0;
}