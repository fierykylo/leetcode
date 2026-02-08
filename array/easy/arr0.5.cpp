#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/?envType=problem-list-v2&envId=dsa-linear-shoal-array-ii

class Solution 
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        int range = maxi - mini + 1;
        int n = nums.size();
        vector <int> temp(range, 0);
        //populating the temp array
        for (int i = 0; i < n; i++)
        {
            temp[nums[i] - mini]++;
        }

        // prefix sum 
        for (int i = 1; i < range; i++)
        {
            temp[i] += temp[i - 1];
        }

        vector<int> output(n, 0);
        for (int i = 0; i < n; i++)
        {
            int idx = nums[i] - mini;
            if (idx == 0)
            {
                output[i] = 0;
                continue;
            }
            output[i] = temp[idx - 1];
        }
        return output;
    }
};