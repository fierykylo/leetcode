#include <bits/stdc++.h>
using namespace std;

//21/3/26
//https://leetcode.com/problems/flip-square-submatrix-vertically/submissions/1955034430/?envType=daily-question&envId=2026-03-21

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) 
    {
        int startrow = x;
        int endrow = x + k - 1;

        int startcol = y;
        int endcol = y + k - 1;

        for (int i = startrow; i <= endrow; i++)
        {
            for (int j = startcol; j <= endcol; j++)
            {
                swap(grid[i][j], grid[endrow][j]);
            }
            endrow--;
        }
        return grid;

    }
};