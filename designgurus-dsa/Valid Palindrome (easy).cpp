#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    bool isPalindrome = true;

    int s1 = a.size();
    for (int i = 0; i < s1; i++)
    {
        char ch = tolower(a[i]);
        if (isalpha(ch))
        {
            b = b + ch;
        }
    }

    // "amanaplanacanalpanama"

    int size2 = b.size();
    for (int i = 0, j = size2 - 1; i < j; i++, j--)
    {
        if (b[i] != b[j])
        {
            isPalindrome = false;
            break;
        }
    }

    isPalindrome ? cout << "This is the palindrome" << a : cout << "This is not palindrome" << a;

    return 0;
}