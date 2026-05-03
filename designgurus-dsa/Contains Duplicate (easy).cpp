#include <bits/stdc++.h>
using namespace std;
// Problem Statement
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// Examples
// Example 1:
// Input: nums= [1, 2, 3, 4]
// Output: false
// Explanation: There are no duplicates in the given array.
// Example 2:
// Input: nums= [1, 2, 3, 1]
// Output: true
// Explanation: '1' is repeating.
// Example 3:
// Input: nums= [3, 2, 6, -1, 2, 1]
// Output: true
// Explanation: '2' is repeating.

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    bool isDuplicate = false;

    // taking input an array
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> m1;
    for (auto ele : arr)
    {
        if (m1[ele])
        {
            isDuplicate = true;
        }
        m1[ele] = 1;
    }

    if (isDuplicate)
    {
        cout << "We have duplicate numbers " << endl;
    }
    else
    {
        cout << "We don't have duplicate numbers " << endl;
    }

    return 0;
}