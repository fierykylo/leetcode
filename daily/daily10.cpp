#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/binary-number-with-alternating-bits/?envType=daily-question&envId=2026-02-18
//18th feb 2026

class Solution 
{
public:
    bool hasAlternatingBits(int n) 
    {
        int result;
        int prev = n & 1;
        n = n >> 1;
        while(n > 0)
        {
            result = n & 1;
            if (result == prev)
            {
                return false;
            }
            prev = result;
            n = n >> 1;
        }
        return true;
    }
};