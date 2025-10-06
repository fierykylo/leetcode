#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 0;
        int n = nums.size();
        for(int j = 1; j < n; j++)
        {
            if (nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
    return (i + 1);
    }
};