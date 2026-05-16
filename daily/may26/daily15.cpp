#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

//15h may 2026

class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int high = nums.size() - 1;
        int low = 0;
        int mid;

        while (low < high)
        {
            mid = (low + high) / 2;

            if (nums[mid] > nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
       return nums[low];
    }
};