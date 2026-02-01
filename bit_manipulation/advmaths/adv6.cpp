#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/count-primes/?envType=problem-list-v2&envId=enumeration

class Solution 
{
public:
     
    int countPrimes(int n) 
    {
        vector<int> is_prime((n), 1);
        if (n <= 2) return 0;
        
        for (int i = 2; i * i < n; i++)
        {
            if (is_prime[i] == 1)
            {
                for (int j = i * i; j < n; j += i)
                {
                    is_prime[j] = 0;
                }
            }
        }
        int count = 0;

        for (int i = 2; i < n; i++)
        {
            if (is_prime[i] == 1)
            {
                count++;
            }
        }
        return count;
    }
};