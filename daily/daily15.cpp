#include <bits/stdc++.h>
using namespace std;

//23-02-06
//https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/?envType=daily-question&envId=2026-02-23

class Solution 
{
public:
    bool hasAllCodes(string s, int k) 
    {
        unordered_set<string> st;
        int n = s.size();
        int codes = 1 << k;

        for (int i = k; i <= n; i++)
        {
            string sub = s.substr(i - k, k);
            if (!st.count(sub))
            {
                st.insert(sub);
                codes--;
            }
            if (codes == 0)
            {
                return true;
            }
        }
        return false;   
    }
};