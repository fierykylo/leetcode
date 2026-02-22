#include <bits/stdc++.h>
using namespace std;

// 22nd feb 2026
// https://leetcode.com/problems/binary-gap/?envType=daily-question&envId=2026-02-22

class Solution {
public:
    int binaryGap(int n) 
    {
        int prev = -1;
        int result = 0;

        for (int curr = 0; curr < 32; curr++)
        {
            if (((n >> curr) & 1) > 0)
            {
                result = (prev != -1) ? max(result, curr - prev) : result;
                prev = curr;
            }
        }
        return result;
    }
};