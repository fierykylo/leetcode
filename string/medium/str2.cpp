#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution 
{
public:
    int maxDepth(string s) 
    {
        int cnt = 0;
        int maxcnt = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                cnt++;
                maxcnt = max(maxcnt, cnt);
            }
            else if (c == ')')
            {
                cnt--;
            }
        }
        return maxcnt;
    }
};