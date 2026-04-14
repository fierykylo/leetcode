#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/

class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        int cnt = 0;
        for (auto it : nums)
        {
            if (it % 3 != 0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};