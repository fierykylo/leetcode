#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/rotate-function/?envType=daily-question&envId=2026-05-01

//1st may 2026

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) 
    {
        int n = nums.size();
        int sum = 0;
        int F = 0;

        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            F += nums[i] * i;
        }
        int result = F;
        for(int k = 0; k <= n - 1; k++)
        {
            int newF = F + sum - n * nums[n - 1 - k];
            result = max(result, newF);
            F = newF;
        }
        return result;
    }
};