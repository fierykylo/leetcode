#include <bits/stdc++.h>
using namespace std;

//7th feb 2026
//https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/?envType=daily-question&envId=2026-02-07

class Solution {
public:
    int minimumDeletions(string s) 
    {
        int length = s.size();
        int cnt = 0;
        int result = 0;
        for (auto c : s)
        {
            if (c == 'b')
            {
                cnt++;
            }
            else if(c == 'a')
            {
                if (cnt > 0)
                {
                    result++;
                    cnt--;
                }
            }
        }
        return result;
    }
};