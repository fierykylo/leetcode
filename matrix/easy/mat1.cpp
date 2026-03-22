#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/flipping-an-image/submissions/1955455859/?envType=problem-list-v2&envId=matrix

class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        for (auto &row : image)
        {
            reverse(row.begin(), row.end());
            for (auto &x : row)
            {
                x = x ^ 1;
            }
        }

        return image;
    }
};