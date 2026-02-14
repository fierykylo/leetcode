#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) 
    {
        unordered_map<int, int> mp;
        int ans = 0;
        for(int num : nums)
        {
            mp[num]++;
            if (mp[num] == 2)
            {
                ans = ans ^ num;
            }
        }
        return ans;
    }
};