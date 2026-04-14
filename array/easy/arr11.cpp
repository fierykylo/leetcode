#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/build-array-from-permutation/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++)
        {
            ans[i] = nums[nums[i]];
        }
        return ans;   
    }
};