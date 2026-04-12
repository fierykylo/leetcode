#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/largest-number-at-least-twice-of-others/

class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int largest = nums[0];
        int slargest = -1;
        int index = 0;

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > largest)
            {
                slargest = largest;
                largest = nums[i];
                index = i;
            }
            else if(nums[i] < largest && nums[i] > slargest)
            {
                slargest = nums[i];
            }
        }
        return((largest >= 2 * slargest) ?  index : -1);

    }
};