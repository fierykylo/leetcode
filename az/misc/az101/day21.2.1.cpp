#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/matrix-diagonal-sum/submissions/1952669400/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int n = mat.size();
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            sum1 += mat[i][i];
            sum2 += mat[i][n - i - 1];
        }
        int sum = sum1 + sum2;
        if (n % 2 != 0)
        {
            sum -= mat[n/2][n/2];
        }
    
        return sum;
    }
};