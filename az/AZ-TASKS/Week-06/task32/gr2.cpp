#include <bits/stdc++.h>
using namespace std;

//random greedy problem 
// leetcode 1029 - https://leetcode.com/problems/two-city-scheduling/description/
class Solution {
public:

    static bool cmp(vector<int> &a, vector<int> &b)
    {
        return a[0] + b[1] < a[1] + b[0];
    }
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        sort(costs.begin(), costs.end(), cmp); 
        int n = costs.size();
        int cost = 0;
        for(int i = 0; i < n/2; i++)
        {
            cost += costs[i][0];
        }
        for(int i = n/2; i < n; i++)
        {
            cost += costs[i][1];
        }
        return cost;
    }
};