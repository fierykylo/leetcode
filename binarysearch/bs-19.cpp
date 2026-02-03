#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/split-array-largest-sum/submissions/1907187997/
// first hard problem 
// solved on my own 

class Solution {
public:
    int countSubarr(vector<int> &arr, int maxsum)
    {
        int subarr = 1;
        int sum = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int temp = arr[i] + sum;
            if (temp <= maxsum)
            {
                sum += arr[i];
            }
            else
            {
                subarr++;
                sum = arr[i];
            }
        }
        return subarr;
    }

    int splitArray(vector<int>& nums, int k) 
    {
        int n = nums.size();
        if (n < k) return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0LL);

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (countSubarr(nums, mid) > k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return low;
    }
};