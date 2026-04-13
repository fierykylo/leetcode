#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/minimum-distance-to-the-target-element/submissions/1976968057/?envType=daily-question&envId=2026-04-13
//13th april 2026
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) 
    {
        int result = INT_MAX;
        for(int i = 0; i < nums.size() && result > abs(i - start); i++)
        {
            if(nums[i] == target)
            {
                result = min(result, abs(i - start));
            }
        }
        return result;   
    }
};