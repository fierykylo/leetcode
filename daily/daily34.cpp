#include <bits/stdc++.h>
using namespace std;


//https://leetcode.com/problems/rotated-digits/?envType=daily-question&envId=2026-05-02

//2nd may 2026

class Solution {
public:

    bool isGood(int num)
    {
        bool changed = false;
        while(num > 0)
        {
            int digit = num % 10;
            if (digit == 3 || digit == 4 || digit == 7) return false;
            if (digit == 2 || digit == 5 || digit == 6 || digit == 9) 
            {
                changed = true;
            }
            num /= 10;
        }
        return changed;
    }

    int rotatedDigits(int n) 
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if(isGood(i))
            {
                count++;
            }
        }
        return count;
    }
};