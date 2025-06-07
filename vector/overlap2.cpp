//  9. Given	a	list	of	intervals,	merge	all	overlapping	intervals.
//  Input:	{[1,	4],	[3,	6],	[8,	10]}
//  Output:	{[1,	6],	[8,	10]}

// to save the space complexity
#include <bits/stdc++.h>
using namespace std;

// missed the & to address
int mergeOverlap(vector<vector<int>> &arr){
  
    int n = arr.size();
    sort(arr.begin(),arr.end());

    int indexed = 0 ;

    for( int i  = 1 ; i < n ; i++){
        if(arr[indexed][1] >= arr[i][0]){
            arr[indexed][1] = max(arr[indexed][1] , arr[i][1]);
        }else{
            indexed++;
            arr[indexed] = arr[i];
        }

    }
    return (indexed+1);
}

int main(){
 vector<vector<int>> arr = {{7, 8}, {1, 5}, {2, 4}, {4, 6}};
  int res = mergeOverlap(arr);

    for (int i = 0 ; i < res ; i++){
        cout << arr[i][0] << " " << arr[i][1] << endl;
    }

    return 0;
}