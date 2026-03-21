#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/richest-customer-wealth/?envType=problem-list-v2&envId=matrix

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int row = accounts.size();
        int col = accounts[0].size();
        int richest = 0;
        int sum = 0;
        for(int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                sum += accounts[i][j];
            }
            richest = max(richest, sum);
            sum = 0;
        }
        return richest;
    }
};