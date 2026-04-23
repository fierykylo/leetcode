#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/number-of-changing-keys/submissions/1986355579/?envType=problem-list-v2&envId=prshgx6i

class Solution {
public:
    int countKeyChanges(string s) 
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int cnt = 0;
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] != s[i-1])
            {
                cnt++;
            }
        }
        return cnt;
 
    }
};