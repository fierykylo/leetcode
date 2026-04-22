#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/three-consecutive-odds/?envType=problem-list-v2&envId=prshgx6i

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        int cnt = 0;
        for (auto it : arr)
        {
            if(it % 2 == 1)
            {
                cnt++;
                if(cnt == 3)
                {
                    return true;
                }
            }
            else
            {
                cnt = 0;
            }
        }
        return false;
    }
};