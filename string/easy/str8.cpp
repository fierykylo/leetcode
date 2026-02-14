#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-the-difference/

class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        char xor1 = 0;
        char xor2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            xor1 = xor1 ^ s[i];
            xor2 = xor2 ^ t[i];
        }
        int last = t.size() - 1;
        xor2 = xor2 ^ t[last];
        char result = xor1 ^ xor2;
        return result;
    }
};