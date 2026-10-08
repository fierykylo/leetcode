#include <bits/stdc++.h>
using namespace std;
//lc 1014 - https://leetcode.com/problems/best-sightseeing-pair/
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) 
    {
        int ans = INT_MIN;
        int leftmax = values[0];
        int n = values.size();

        for(int j = 1; j < n; j++)
        {
            ans = max(ans, leftmax + values[j] - j);
            leftmax = max(leftmax, values[j] + j);
        }
        return ans;
    }
};
