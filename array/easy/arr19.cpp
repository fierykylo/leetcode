#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/sign-of-the-product-of-an-array/description/
class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        long long product = 1;
        for(auto it : nums){
            if (it == 0)
            {
                return 0;
            }
            product *= it;
            (product > 0) ? product = 1 : product = -1;

        }
        return(product > 0) ? 1 : -1;

    }
}