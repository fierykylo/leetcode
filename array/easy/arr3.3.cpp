#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/single-number/

class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        int xor1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            xor1 ^= nums[i];
        }
        return xor1;
    }
};