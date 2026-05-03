#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/rotate-string/submissions/1993855798/?envType=daily-question&envId=2026-05-03
//5th may 2026
class Solution 
{
public:
    bool rotateString(string s, string goal) 
    {
        int n = s.length();
        int m = goal.length();

        if (n != m) return false;
        
        if ((s + s).find(goal) != string::npos)
        {
            return true;
        }
        return false;
        
    }
};