#include <bits/stdc++.h>
using namespace std;

// better solution to the majority element

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> mp;

        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
            if (mp[nums[i]] > (n/2))
            {
                return nums[i];
            }
        }
        return -1;
    }
};