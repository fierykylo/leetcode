#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/type-of-triangle/?envType=problem-list-v2&envId=prshgx6i


class Solution {
public:
    string triangleType(vector<int>& nums) 
    {
        int val1 = nums[0];
        int val2 = nums[1];
        int val3 = nums[2];

        if(val1 == val2 && val2 == val3)
        {
            return "equilateral";
        }
        else if(val1 + val2 > val3 && val1 + val3 > val2 && 
        val2 + val3 > val1){
            if(val1 != val2 && val1 != val3 && val2 != val3)
            {
                return "scalene";
            }
            else
            {
                return "isosceles";
            }
        }
        else
        {
            return "none";
        }
        return "";
    }
  
};