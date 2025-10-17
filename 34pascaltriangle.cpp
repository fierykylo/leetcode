#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row)
{
    vector<int> rans;
    long long ans = 1;
    rans.push_back(ans);

    for (int col = 1; col < row; col++)
    {
        ans = ans * (row - col);
        ans = ans / col;
        rans.push_back(ans);
    }
    return rans;

}

class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++)
        {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};