#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
      int low = 0;
      int rowsz = matrix.size();
      int colsz = matrix[0].size();
       int high  = rowsz * colsz - 1;
      while(low <= high)
      {
        int mid = low + (high - low) / 2;
        int row = mid / colsz;
        int col = mid % colsz;
        if (target == matrix[row][col])
        {
            return true;
        }
        else if (target > matrix[row][col])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
      }
      return false; 
    }
};