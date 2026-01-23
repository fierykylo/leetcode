#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
// solved without watching the video 

class Solution {
public:

    bool divisor(vector<int> &v, int threshold, int mid)
    {
        long long div = 0;
        for (int x : v)
        {
            div += (x + mid - 1) / mid;
        }
        return (div <= threshold); 
        
    }
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int n = nums.size();

        if (threshold == n)
        {
            int maxel = *max_element(nums.begin(), nums.end());
            return maxel;
        }
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (divisor(nums, threshold, mid) == true)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};