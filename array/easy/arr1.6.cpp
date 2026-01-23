#include <bits/stdc++.h>
using namespace std;

// another easy striver problem solved by me
// hehe
// 2 pointer approach used to move 0's to the end 
// https://leetcode.com/problems/apply-operations-to-an-array/

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) 
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums[i] = nums[i] * 2;
                nums[i + 1] = 0;
            }
        }
        int i = 0;
        for(int j = 0; j < n; j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return nums;
    }
};