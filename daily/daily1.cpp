#include <bits/stdc++.h>
using namespace std;

// daily - 6th feb 2026
//https://leetcode.com/problems/minimum-removals-to-balance-array/?envType=daily-question&envId=2026-02-06


class Solution 
{
public:
    int minRemoval(vector<int>& nums, int k) 
    {
        int n = nums.size();
        if (n == 1) return 0;
        sort(nums.begin(), nums.end());
        int i = 0, j = 0;
        int maxlen = 0;
        while (j < n)
        {
            long long temp = 1LL * nums[i] * k;
            if (nums[j] <= temp)
            {
                maxlen = max(maxlen, (j - i + 1));
                j++;
                
            }
            else
            {
                i++;
            }
        }
        return (n - maxlen);

    }
};