#include <bits/stdc++.h>
using namespace std;

//my 100th leetcode problem 
//https://leetcode.com/problems/string-to-integer-atoi/


class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int sign = 1;
        int i = 0;
        // eliminate leading white spaces;
        while (i < n && s[i] == ' ')
            i++;
        // check for negative sign
        if (i < n && (s[i] == '+' || s[i] == '-')) 
        {
            if (s[i] == '-')
            {
                sign = -1;
            }
            i++;
        }

        //lets build the number final part

        long num = 0;
        while (i < n && isdigit(s[i]))
        {
            int digit = s[i] - '0';
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7)) 
            {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            num = num * 10 + digit;
            i++;

        }
        return sign * num;
    }
};