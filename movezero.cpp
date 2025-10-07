#include <bits/stdc++.h>
using namespace std;

// leetcode movezeroes problem

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        // to find the 0th index
        int j = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                j = i;
                break;
            }
        }
        if (j == -1) return;

        //moving zeroes to end
        for (int i = j + 1; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};