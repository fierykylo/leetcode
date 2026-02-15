#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/add-binary/?envType=daily-question&envId=2026-02-15
// date - 15th feb 2026

class Solution 
{
public:
    string addBinary(string a, string b) 
    {
        int m = a.length() - 1;
        int n = b.length() - 1;
        string result = "";
        int carry = 0; 
        int sum = 0;
        
        while (m >= 0 || n >= 0)
        {
            int val1 = 0, val2 = 0;
            if (m >= 0)
            {
                val1 = a[m] - '0';
            }
            if (n >= 0)
            {
                val2 = b[n] - '0';
            }

            sum = val1 + val2 + carry;
            carry = sum / 2;
            result.push_back((sum % 2) == 1 ? '1' : '0');
            m--;
            n--;

        }
        if (carry)
        {
            result.push_back('1');
        }
        reverse(result.begin(), result.end());
        return result;
    }
};