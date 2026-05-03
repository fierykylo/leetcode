#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-first-palindromic-string-in-the-array/?envType=problem-list-v2&envId=prshgx6i

class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    {
        for(auto it : words)
        {
            string check = it;
            reverse(check.begin(), check.end());
            if(it == check)
            {
                return it;
            }
        }
        return "";
    }
};