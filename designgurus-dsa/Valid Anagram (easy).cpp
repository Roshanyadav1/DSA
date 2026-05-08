// Problem Statement
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.

// Example 1:

// Input: s = "listen", t = "silent"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false
// Example 3:

// Input: s = "hello", t = "world"
// Output: false
// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 , s2;
    cin >> s1 >> s2;
    bool isValidAnagram = true;
     
    int size1 = s1.size() , size2 = s2.size();
    if(size1 != size2){
        cout << "Its not valid anagram";
        return 0;
    }
    unordered_map<char , int> visited;

    for(int i = 0 ; i< size2;i++){
        visited[s2[i]]++;
    }

    for(int i = 0 ; i < size1 ; i++){
        char c1 = s1[i];
        if(visited[c1]){
            visited[c1]--;
        }else{
            isValidAnagram = false;
            break;
        }
    }

    if(isValidAnagram){
        cout << "The " << s1 << "  and " << s2 << "  is valid panagram : " << endl;
    } else{
        cout << "The " << s1 << "  and " << s2 << "  is not valid panagram : " << endl;
    }
}