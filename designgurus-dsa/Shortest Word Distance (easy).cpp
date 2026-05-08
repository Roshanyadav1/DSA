// Shortest Word Distance (easy)
// Problem Statement
// Given an array of strings words and two different strings that already exist in the array word1 and word2, return the shortest distance between these two words in the list.

// Example 1:

// Input: words = ["the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"], word1 = "fox", word2 = "dog"
// Output: 5
// Explanation: The distance between "fox" and "dog" is 5 words.
// Example 2:

// Input: words = ["a", "c", "d", "b", "a"], word1 = "a", word2 = "b"
// Output: 1
// Explanation: The shortest distance between "a" and "b" is 1 word

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 9;
    // cin >> n;
    vector<string> arr = {"the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};

    // for(int i = 0 ; i < n ; i++){
    //     cin >> arr[i];
    // }

    string word1 = "fox" , word2 = "dog";
    int count = 0 , next = 0;
    bool startCount = false;
    for(int i = 0 ; i < n;i++){
        if(startCount){
            count++;
        }
        if(arr[i] == word1){
            startCount = true;
        }
        if(arr[i] == word2){
            break;
        }
    }

    cout << "Target found in " << count  << "  steps : " << endl;
    return 0;
}