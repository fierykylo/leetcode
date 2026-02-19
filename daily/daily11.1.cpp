#include <bits/stdc++.h>
using namespace std;

// idk which day
// but i liked the problem and wanted to solve it
// it uses recursion
// also learnt memoisation
// stats mte in a few hours i should sleep 
// goodnight
//https://leetcode.com/problems/champagne-tower/
class Solution 
{
public:
    double t[101][101];
    double solve(int poured, int i, int j)
    {
        if (i < 0 || j < 0 || i < j)
        {
            return 0.0;
        }
        if (i == 0 && j == 0)
        {
            return (poured);
        }
        if (t[i][j] != -1)
        {
            return t[i][j];
        }
        double left_up = max(0.0, (solve(poured, i - 1, j - 1) - 1) / 2.0);
        double right_up = max(0.0, (solve(poured, i - 1, j) - 1) / 2.0);

        if (left_up < 0)
        {
            return 0.0;
        }
        if (right_up < 0)
        {
            return 0.0;
        }
        return t[i][j] = left_up + right_up;
    }
    double champagneTower(int poured, int query_row, int query_glass) 
    {
        for (int i = 0; i < 101; i++)
        {
            for (int j = 0; j < 101; j++)
            {
                t[i][j] = -1;
            }
        }
        return min(solve(poured, query_row, query_glass), 1.0);
    }
};