#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/keep-multiplying-found-values-by-two/?envType=problem-list-v2&envId=arbaks6c

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) 
    {
        bool flag = true;
        bool flag2 = false;;
        while (flag)
        {
            flag2 = false;
            for(auto it: nums)
            {
                if(it == original)
                {
                    flag2 = true;
                    original *= 2;
                    break;
                }
            }
            if (!flag2)
            {
                break;
            }
        }
        return original;
    }
};