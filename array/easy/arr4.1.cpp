#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/count-the-digits-that-divide-a-number/submissions/1959284711/

class Solution 
{
public:
    int countDigits(int num) 
    {
        int cnt = 0;
        int n = num;
        while (n > 0)
        {
            int digit = n % 10;
            if(num % digit == 0) cnt++;
            n /= 10;
        }
        return cnt;
    }
};

