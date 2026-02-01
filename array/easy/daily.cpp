#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/?envType=daily-question&envId=2026-02-01

class Solution {
public:
    int minimumCost(vector<int>& nums) 
    {
        int n = nums.size();

        // If exactly 3 elements
        if (n == 3)
        {
            return nums[0] + nums[1] + nums[2];
        }

        int min1 = nums[1];
        int min2 = INT_MAX;

        for (int i = 2; i < n; i++)
        {
            if (nums[i] < min1)
            {
                min2 = min1;
                min1 = nums[i];
            }
            else if (nums[i] < min2)
            {
                min2 = nums[i];
            }
        }

        return nums[0] + min1 + min2;
    }
};