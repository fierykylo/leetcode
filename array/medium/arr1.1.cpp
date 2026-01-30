#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/two-sum/submissions/1902277398/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int needed = target - nums[i];
            auto it = map1.find(needed);
            if (it != map1.end())
            {
                return{map1[needed], i};
            }
            else
            {
                map1[nums[i]] = i;
            }
        }
        return {-1, -1};
    }
};