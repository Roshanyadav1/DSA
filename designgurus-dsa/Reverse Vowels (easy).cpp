// Problem Statement
// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

// Example 1:

// Input: s= "hello"
// Output: "holle"
// Example 2:

// Input: s= "AEIOU"
// Output: "UOIEA"
// Example 3:

// Input: s= "DesignGUrus"
// Output: "DusUgnGires"
// Constraints:

// 1 <= s.length <= 3 * 105
// s consist of printable ASCII characters.

#include <bits/stdc++.h>
using namespace std;

void swap(char &a, char &b)
{
    char c = a;
    b = a;
    a = c;
}

int main()
{
    // we are going to use two pointer approach

    string s1 = "UOIEA";
    char a, b;

    unordered_map<char, int> vowel =
        {{'a', 1},
         {'e', 1},
         {'i', 1},
         {'o', 1},
         {'u', 1},
         {'A', 1},
         {'E', 1},
         {'I', 1},
         {'O', 1},
         {'U', 1}};

    int i = 0, j = s1.size();
    while (i < j)
    {
        a = s1[i];
        b = s1[j];

        if (vowel[a] && vowel[b])
        {
            // if we found the vowel in both position;
            swap(a, b);
        }

        if (vowel[a])
        {
            j--;
        }
        if (vowel[j])
        {
            i++;
        }
    }

    cout << s1;

    return 0;
}