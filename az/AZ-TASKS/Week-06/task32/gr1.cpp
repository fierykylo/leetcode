#include <bits/stdc++.h>
using namespace std;

//random greedy problem
//leetcode 1710 - https://leetcode.com/problems/maximum-units-on-a-truck/description/

class Solution {
public:

    static bool cmp(vector<int> &a, vector<int> &b)
    {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
    {
        sort(boxTypes.begin(), boxTypes.end(), cmp); 
        int n = boxTypes.size();
        int cap = truckSize;
        int units = 0;
        for(int i = 0; i < n; i++)
        {
            if((cap - boxTypes[i][0]) >= 0)
            {
                cap -= boxTypes[i][0];
                units += boxTypes[i][0] * boxTypes[i][1];

            }
            else
            {
                units += boxTypes[i][1] * cap;
                cap = 0;
                break;
            }
        }
        return units;
    }
};