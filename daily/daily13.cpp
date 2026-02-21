#include <bits/stdc++.h>
using namespace std;

//21st feb 2026
// https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/?envType=daily-question&envId=2026-02-21

class Solution
{
public:
    // my helper function to help the builder 
    bool isPrime(int x)
    {
        if (x < 2) return false;

        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0) return false;
        }
        return true;
    }
    // this builds a bitwise mask instead of sieve and is dynamic too so nice
    int buildMask()
    {
        int mask = 0;
        for (int i = 2; i <= 20; i++)
        {
            if (isPrime(i))
            {
                mask |= (1 << i);
            }
        }
        return mask;
    }
    // main function
    int countPrimeSetBits(int left, int right) 
    {
        int mask = buildMask();
        int cnt = 0;
        for (int i = left; i <= right; i++)
        {
            int setbits = __builtin_popcount(i);
            if ( (mask >> setbits) & 1)
            {
                cnt++;
            }
        }
        return cnt; 
    }
};