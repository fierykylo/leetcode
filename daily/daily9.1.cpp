#include <bits/stdc++.h>
using namespace std;

// similar to daily
//https://leetcode.com/problems/counting-bits/

class Solution 
{
public:
    vector<int> countBits(int n) 
    {
        vector<int> result;
        for (int i = 0; i <= n; i++) 
        {
            int n = __builtin_popcount(i);
            result.push_back(n);
        }
        return result;
    }
};