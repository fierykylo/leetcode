#include <bits/stdc++.h>
using namespace std;

// this question was not a part of striver's sheet
// i solved this on my own 
// nice feeling
//https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

// works like arr 1.4 on the same two pointer approach

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n = nums.size();
        int i = 0;
        int j = 0;
        for (j; j < n; j++)
        {
            if(nums[j] != val)
            {
                swap(nums[j], nums[i]);
                i++;
            }
        }
        return i;
        
    }
};