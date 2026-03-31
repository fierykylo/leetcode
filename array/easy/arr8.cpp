#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-if-digit-game-can-be-won/

class Solution 
{
public:
    bool canAliceWin(vector<int>& nums) 
    {
        int sum1 = 0;
        int sum2 = 0;
        for (auto it : nums)
        {
            if (it <= 9)
            {
                sum1 += it;
            }
            else
            {
                sum2 += it;
            }
        }
        return sum1 != sum2;
    }
};