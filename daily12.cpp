#include <bits/stdc++.h>
using namespace std;

// 20th feb 2026
//https://leetcode.com/problems/special-binary-string/?envType=daily-question&envId=2026-02-20

class Solution 
{
public:
    string solve (string s)
    {
        vector<string> specials;
        
        int start = 0;
        int sum = 0;
        
        int n= s.length();
        
        for (int i = 0; i < n; i++)
        { 
            sum += (s[i] == '1' ? 1 : -1);

            if (sum == 0)
            {
                string inner = s.substr(start + 1, i - start - 1);
                specials.push_back("1" +solve(inner) + "0");
                start = i + 1;
            }
        }
        sort(begin(specials), end(specials), greater<string>());
        string result;

        for (string &str : specials)
        {
            result += str;
        }
        return result;


    }
    string makeLargestSpecial(string s) 
    {
        return solve(s);   
    }
};