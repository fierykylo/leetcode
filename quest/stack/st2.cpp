#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/evaluate-reverse-polish-notation/?envType=problem-list-v2&envId=dsa-linear-shoal-stack

class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> st;
        for (auto c : tokens)
        {
            if (c == "+" || c == "-" || c == "/" || c == "*")
            {
              int b = st.top(); st.pop(); // value assign then pop off yea yea
              int a = st.top(); st.pop();

              if (c == "+")
              {
                st.push(a + b);
              }
              else if(c == "*")
              {
                st.push(a * b);
              }
              else if  (c == "-")
              {
                st.push(a - b);
              }
              else
              {
                st.push(a / b);
              }
            }
            else
            {
                int val = stoi(c);
                st.push(val);
            }
        }
        return st.top();
    }
};