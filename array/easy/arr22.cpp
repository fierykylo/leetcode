#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/submissions/1995907549/?envType=problem-list-v2&envId=prshgx6i


class Solution {
public:
    int differenceOfSum(vector<int>& nums) 
    {
        int esum = 0;
        int dsum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            esum += nums[i];
            int n = nums[i];
            while(n > 0)
            {
                dsum += (n % 10);
                n /= 10;
            }
        }
        return esum - dsum;   
    }
};