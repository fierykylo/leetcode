#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/submissions/1984755696/?envType=problem-list-v2&envId=prshgx6i

class Solution {
public:
    int differenceOfSums(int n, int m) 
    {
        int num1 = 0;
        int num2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if(i % m == 0)
            {
                num2 += i;
            }
            else
            {
                num1 += i;
            }
        }
        return num1-num2;
    }
};