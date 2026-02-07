#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/maximum-69-number/submissions/
// my 69th problem on leetcode 
// maxium number 69 hahaha
//idk felt funny

class Solution 
{
public:

    int maximum69Number (int num) 
    {
        string s = to_string(num);
        for (auto c : s)
        {
            if (c == '6')
            {
                c = '9';
                break;
            }
        }
        num = stoi(s);
        return num;
    }
};