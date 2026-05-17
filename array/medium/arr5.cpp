#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        
        set<char> st;
        int n = s.length();
        int tail = 0, head = -1;
        int ans = 0;
        while(tail < n)
        {
            //eat
            while(head + 1 < n && !st.count(s[head + 1]))
            {
                head++;
                st.insert(s[head]);
            }
            ans = max(ans, head - tail + 1);
            if(tail <= head)
            {
                st.erase(s[tail]);
                tail++;
            }
            else{
                tail++;
                head = tail - 1;
            }
        }
        return ans;
    }
};