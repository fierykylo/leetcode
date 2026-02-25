#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/submissions/1931201197/?envType=daily-question&envId=2026-02-25
//25th feb 2026
class Solution
{
public:
    vector<int> sortByBits(vector<int> &arr)
    {
        auto lambda = [&](int &a, int &b)
        {
            int cntA = __builtin_popcount(a);
            int cntB = __builtin_popcount(b);
            if (cntA == cntB)
                return a < b;
            return cntA < cntB;
        };
        sort(begin(arr), end(arr), lambda);
        return arr;
    }
};