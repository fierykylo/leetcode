#include <bits/stdc++.h>
using namespace std;

//https://www.geeksforgeeks.org/problems/sum-of-subarrays2229/1
//sum of subarray

class Solution {
  public:
    int subarraySum(vector<int>& arr) 
    {
        // code here
        int n = arr.size();
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            ans += arr[i] * (i + 1) * (n - i);
        }
        return ans;
    }
};

