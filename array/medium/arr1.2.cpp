#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/key-pair5616/1
// first variant 
// optimal two pointer solution 

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) 
    {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int left = 0; 
        int right = n - 1;
        while (left < right)
        {
            int sum = arr[left] + arr[right];
            if (sum == target)
            {
                return true;
            }
            else if (sum > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return false;
        
    }
};