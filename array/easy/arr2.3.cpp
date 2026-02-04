#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/move-zeroes/


class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n = nums.size();
        if (n == 1) return; // bailout condition 
        int j = -1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                j = i;
                break; // it is important to break out to preserve the order
            }
        }  

        if (j == -1) return; // another flag if no zeroes

        for (int i = j + 1; i < n; i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        } 
    }
};