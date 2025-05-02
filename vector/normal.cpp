#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> num =	{1,	2,	3,	4,	5,	6,	7,	8,	9,	10};
    int sum = 0 ;
    for(int i = 0 ; i < num.size() ; i++){
        sum += num.at(i);
    }
    cout << "The total sum of the number is : " << sum << endl;
    return 0;
}