#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/minimum-number-game/submissions/1993864927/?envType=problem-list-v2&envId=prshgx6i



class Solution {
public:
    vector<int> numberGame(vector<int>& nums) 
    {
        if(nums.size() <= 1) return nums;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n - 1; i += 2)
        {
            swap(nums[i], nums[i + 1]);
        }
        return nums;  
    }
};