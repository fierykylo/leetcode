#include <bits/stdc++.h>
using namespace std;

// uses binary search on a range 
// kinda easy
// using binary search to find out the sqrt 
// also question number 69

//https://leetcode.com/problems/sqrtx/

class Solution {
public:
    long long mySqrt(int x) 
    {
        long long high = x;
        long long low = 1;

        while (low <= high)
        {
            long long mid = (low + high) / 2;
            long long check = mid * mid;
            if ((check) > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return high;
    }
};