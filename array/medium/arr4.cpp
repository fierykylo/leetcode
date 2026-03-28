#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/powx-n/submissions/1959849609/

class Solution {
public:
    double binpow(double a, long long b)
    {
        if (b == 0) return 1;
        if (b % 2)
        {
            return (a * binpow(a, b - 1));
        }
        else
        {
            double temp = binpow(a, b / 2);
            return temp * temp;
        }   
    }
    double myPow(double x, int n) 
    {
        long long N = n;
        if (n < 0)
        {
            x = 1 / x;
            N = -N;
        }

        double answer = binpow(x, N);
        return answer;
    }
};