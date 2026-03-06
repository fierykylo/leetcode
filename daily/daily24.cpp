#include <bits/stdc++.h>
using namespace std;

//6th march 2026
//https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/?envType=daily-question&envId=2026-03-06

class Solution 
{
public:
    bool checkOnesSegment(string s) 
    {
        bool flag = true;
        for (char c : s)
        {
            if (c == '1' && flag == true)
            {
                continue;
            }
            else if (c == '0' && flag == true)
            {
                flag = false;
            }
            else if (c == '1' && flag == false)
            {
                return false;
            }
        }
        return true;

    }
};