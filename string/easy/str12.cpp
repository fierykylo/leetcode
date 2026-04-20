#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/to-lower-case/submissions/1983718952/?envType=problem-list-v2&envId=prshgx6i

class Solution {
public:
    string toLowerCase(string s) 
    {
        for (auto &x : s)
        {
            x = tolower(x);
        }
        return s;
    }
};