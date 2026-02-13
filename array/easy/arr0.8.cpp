#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/count-elements-with-maximum-frequency/

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        unordered_map<int, int> mp;
        int maxfreq = 0;

        for (int num : nums)
        {
            mp[num]++;
            maxfreq = max(maxfreq, mp[num]);
        }
        int result = 0;
        for (auto &p : mp)
        {
            if (p.second == maxfreq)
            {
                result += p.second;
            }
        }
        return result;
    }
};