#include <bits/stdc++.h>
using namespace std;

// similar to daily
// already solved on leetcode
// adding to repo
//https://leetcode.com/problems/number-of-1-bits/

class Solution {
public:
    int hammingWeight(int n) 
    {
        int count = 0;
        while(n != 0)
        {
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};