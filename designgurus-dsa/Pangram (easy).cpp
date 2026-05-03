// Problem Statement
// A pangram is a sentence where every letter of the English alphabet appears at least once.
// Given a string sentence containing English letters (lower or upper-case), return true if sentence is a pangram, or false otherwise.
// Note: The given sentence might contain other characters like digits or spaces, your solution should handle these too.
// Example 1:
// Input: sentence = "TheQuickBrownFoxJumpsOverTheLazyDog"
// Output: true
// Explanation: The sentence contains at least one occurrence of every letter of the English alphabet either in lower or upper case.
// Example 2:
// Input: sentence = "This is not a pangram"
// Output: false
// Explanation: The sentence doesn't contain at least one occurrence of every letter of the English alphabet.
// Constraints:
// 1 <= sentence.length <= 1000
// sentence consists of lower or upper-case English lettes

#include <bits/stdc++.h>
using namespace std;

bool checkPanagram(string s1)
{
    unordered_set<char> seen;

    for (int i = 0; i < s1.size(); i++)
    {
        char c1 = tolower(s1[i]);

        if (isalpha(c1))
        {
            seen.insert(c1);
        }
    }

    return seen.size() == 26;
}

int main()
{
    string s1 = "TheQuickBrownFoxJumpsOverTheLazyDog";

    // check its panagram or not
    bool isPanagram = checkPanagram(s1);

    if (isPanagram)
    {
        cout << "String is panagram :";
    }
    else
    {
        cout << "String is not panagram :";
    }

    return 0;
}