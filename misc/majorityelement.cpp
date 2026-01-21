#include <bits/stdc++.h>
using namespace std;

// this leetcode question uses moore voting algorithm



class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count = 0;
        int ele;
        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
            {
                count++;
                ele = nums[i];
            }
            else if (nums[i] == ele)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return ele;
        
    }

};