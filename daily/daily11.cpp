#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/count-binary-substrings/?envType=daily-question&envId=2026-02-19
//19th feb 2026

class Solution 
{
public:
    int countBinarySubstrings(string s) 
    {
        int current = 1;
        int prev = 0;
        int result = 0;
        for (int i = 1; i <s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                current++;
            }
            else
            {
                int value = min(current, prev);
                result += value;
                prev = current;
                current = 1;
            }
        }
        return result + min(prev, current);
    }
};