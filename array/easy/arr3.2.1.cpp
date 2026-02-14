#include <bits/stdc++.h>
using namespace std;

//https://www.geeksforgeeks.org/problems/max-consecutive-one/1

class Solution {
  public:
    int maxConsecBits(vector<int> &arr) 
    {
        int cnt1 = 0;
        int cnt0 = 0;
        int max1 = 0;
        int max0 = 0;
        
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 1)
            {
                cnt0 = 0;
                cnt1++;
                max1 = max(max1, cnt1);
            }
            else
            {
                cnt1 = 0;
                cnt0++;
                max0 = max(cnt0, max0);
            }
        }
        int result = max(max0, max1);
        return result;
        
    
    }
};