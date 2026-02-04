#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/remove-outermost-parentheses/submissions/1908336390/

class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        string result;
        int balance = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                if (balance > 0)
                {
                    result += c;
                }
                balance++;
            }
            else
            {
                balance--;
                if (balance > 0)
                {
                    result += c;
                }
            }
        }
        return result;
    }
};