#include <bits/stdc++.h>
using namespace std;

// 16th feb
//https://leetcode.com/problems/reverse-bits/?envType=daily-question&envId=2026-02-16

class Solution {
public:
    int reverseBits(int n) 
    {
        if (n == 0) return 0;
        int result = 0;

        for (int i = 1; i <= 32; i++)
        {
            result = result << 1;
            result = (result | (n & 1));
            n = n >> 1;
        }
        return result;
    }
};