#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/mirror-distance-of-an-integer/submissions/1981421002/?envType=daily-question&envId=2026-04-18
//17-04-26
class Solution {
public:
    int mirrorDistance(int n) 
    {
        int revn = n;
        string s = to_string(revn);
        reverse(s.begin(), s.end());
        revn = stoi(s);
        return abs(n - revn);
    }
};