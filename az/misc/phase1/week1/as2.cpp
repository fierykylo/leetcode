#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/interval-list-intersections/

class Solution
{
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>> &firstList,
                                             vector<vector<int>> &secondList)
    {
        int n = firstList.size();
        int m = secondList.size();
        vector<vector<int>> ans;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            int l1 = firstList[i][0];
            int r1 = firstList[i][1];
            int l2 = secondList[j][0];
            int r2 = secondList[j][1];
            int start = max(l1, l2);
            int end = min(r1, r2);
            if (start <= end)
            {
                ans.push_back({start, end});
            }
            (r1 > r2) ? j++ : i++;
        }
        return ans;
    }
};