#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/longest-common-prefix/submissions/1917616711/

class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.size() == 0) return "";
        if(strs.size() == 1) return strs[0]; 
        int n = strs[0].length();
        int m = strs.size();

        string result;

        for (int i = 0; i < n; i++)
        {
            char current = strs[0][i];
            for (int j = 1; j < m; j++)
            {
                if (i > strs[j].length() || current != strs[j][i])
                {
                    return result;
                }
            }
            result += current;
        }
        return result;
    }
};