#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/?envType=problem-list-v2&envId=dsa-linear-shoal-array-ii
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> ans(n);
        for(int i = 0; i < n; i++)
        {
            ans[nums[i] - 1]++; // remember this bs
        }
        vector <int> result;
        for(int i = 0; i < n; i++)
        {
            if (ans[i] == 0)
            {
                result.emplace_back(i + 1);
            }
        }
        return result;
    }
};