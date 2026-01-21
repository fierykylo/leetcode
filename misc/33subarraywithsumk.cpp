#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int, int> presum;

        int count = 0, sum = 0;
        int n  = nums.size();
        presum[sum]++;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            int rem = sum - k;
            if (presum.find(rem) != presum.end())
            {
                count += presum[rem];
            }
            presum[sum] ++;

        }    
        return count;
    }
};