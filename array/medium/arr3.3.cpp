#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/most-frequent-even-element/

class Solution 
{
    public:
        int mostFrequentEven(vector<int>& nums) 
        {
            unordered_map<long long, int> mp;
            int n = nums.size();

            for (int i = 0; i < n; i++)
            {
                if (nums[i] % 2 == 0)
                {
                    mp[nums[i]]++;
                }
            }
            if (mp.empty())
            {
                return -1;
            }
            long long best_frequency = 1;
            long long number;

            for (auto it : mp)
            {
                if (it.second > best_frequency)
                {
                    best_frequency = it.second;
                    number = it.first;
                }
                else if(it.second == best_frequency)
                {
                    number = min(it.first, number);
                }
            }
            return number;
        }
};