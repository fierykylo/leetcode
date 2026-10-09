#include <bits/stdc++.h>
using namespace std;

//leetcode 20 - valid parenthesis https://leetcode.com/problems/valid-parentheses/description/

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                char open = st.top();
                st.pop();
                if (s[i] == ')' && open != '(' || s[i] == '}' && open != '{' ||
                    s[i] == ']' && open != '[')
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};