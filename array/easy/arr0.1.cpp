#include <bits/stdc++.h>
using namespace std;

// this is from leetcode quest or sumn
// https://leetcode.com/problems/concatenation-of-array/?envType=problem-list-v2&envId=dsa-linear-shoal-array-i

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ans(2*n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[i];
        }
        for(int i = n; i < (2 * n); i++)
        {
            ans[i] = nums[i - n];
        }
        return ans;
    }
};