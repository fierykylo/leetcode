#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/squares-of-a-sorted-array/?envType=problem-list-v2&envId=prshgx6i
class Solcution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        for(auto &it: nums)
        {
            it = it * it;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};