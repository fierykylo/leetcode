#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/shuffle-the-array/?envType=problem-list-v2&envId=dsa-linear-shoal-array-i
//array-I quest question 2
class Solution 
{
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        int size = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        } 
        return ans;
    }
};