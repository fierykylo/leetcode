#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) 
    {
        // code here
        map <long long , int> presummap;
        
        long long sum = 0;
        int maxlen = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if (sum == k)
            {
                maxlen = max(maxlen, i + 1);
            }
            int rem = sum - k;
            if (presummap.find(rem) != presummap.end())
            {
                int len = i - presummap[rem];
                maxlen = max(maxlen, len);
            }
            
            if (presummap.find(sum) == presummap.end())
            {
                presummap[sum] = i;
            }
        }
      return maxlen;  
    }
};