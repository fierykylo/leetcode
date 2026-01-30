#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/1902329563/
// solved on my own lmfao

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
          int low = 0;
          int high = numbers.size() - 1;

          while (low < high)
          {
            int sum = (numbers[low] + numbers[high]);
            if (sum > target)
            {
                high--;
            }
            else if (sum == target)
            {
                return {(low + 1), (high + 1)};
            }
            else
            {
                low++;
            }
          } 
          return {-1, -1};
    }
};