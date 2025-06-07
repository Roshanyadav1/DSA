//  9. Given	a	list	of	intervals,	merge	all	overlapping	intervals.
//  Input:	{[1,	4],	[3,	6],	[8,	10]}
//  Output:	{[1,	6],	[8,	10]}

#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
using namespace std;

// missed the & to address
vector<vector<int>> mergeOverlap(vector<vector<int>> &arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> res;
    res.push_back(arr[0]);

    for(int i = 1 ; i < n ; i++){
        vector<int> last = res.back();
        vector<int> current = arr[i];

        if(last[1] > current[0]){
            // mean we found the current is smaller than the last element 
            last[1] = max(last[1] , current[1]);
        }else{
            // i missed to put i here 
            res.push_back(arr[i]);
        }

    }
    return res;
}

int main(){
 vector<vector<int>> arr = {{7, 8}, {1, 5}, {2, 4}, {4, 6}};
    vector<vector<int>> res = mergeOverlap(arr);

    for (auto interval : res){
        cout << interval[0] << " " << interval[1] << endl;
    }

    return 0;

}