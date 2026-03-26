#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/1959285829/?envType=problem-list-v2&envId=prshgx6i

class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int num = n;
        int product = 1;
        int sum = 0;
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit;
            product *= digit;
            num /= 10;
        }
        return (product - sum);
        
    }
};