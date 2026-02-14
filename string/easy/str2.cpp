#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/reverse-words-in-a-string/submissions/1916165464/

class Solution 
{
public:
    string reverseWords(string s) 
    {
        // reverse karo the whole string 
        reverse(s.begin(), s.end());
        int l = 0, r = 0;
        int i = 0;
        int n = s.size();
        // two pointer loop
        while (i < n)
        {
            while (i < n && s[i] != ' ')
            {
                s[r++] = s[i++];
            }

            if (l < r)
            {
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++;

        }
        s = s.substr(0, r - 1);
        return s;
    
    }
};