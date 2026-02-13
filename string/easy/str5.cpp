#include <bits/stdc++.h>
using namespace std;

// isomorphic string is when u map
// used two unordered map to check reverse chaining as well 
//https://leetcode.com/problems/isomorphic-strings/

class Solution 
{
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char, char> m1, m2;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            // used this because it was hashing twice not good for time complexity
            auto it1 = m1.find(s[i]);
            if (it1 != m1.end() && it1->second != t[i])
            { 
                return false;
            }

            auto it2 = m2.find(t[i]);
            if (it2 != m2.end() && it2->second != s[i])
            {
                return false;
            }

            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }
        return true;
    }
};