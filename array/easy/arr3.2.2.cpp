#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) 
    {
        unordered_map<int, int> mp;
        for(int num : nums)
        {
            mp[num]++;
        }
        int ans = 0;
        for(auto it : mp)
        {
            if(it.second == 2)
            {
                ans = ans ^ it.first;
            }
        }
        return ans;
    }
};