#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/max-consecutive-ones/submissions/1910685010/?envType=problem-list-v2&envId=dsa-linear-shoal-array-i
// array-I problem 3 also matches with arr3.2 therefore i am making sure i commit this only once 
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n = nums.size();
        int maxi = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                cnt++;
                maxi = max(maxi, cnt);
            }
            else
            {
                cnt = 0;
            }
        }
        return maxi;
    }
};