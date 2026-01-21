#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int maxi = 0 , count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
                maxi = max(maxi,count); // use of max function that is something cool yk
            }
            else
            {
                count = 0;
            }
        }
        return maxi;
    }
};