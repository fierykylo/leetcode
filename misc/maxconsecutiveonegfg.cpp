#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxConsecBits(vector<int> &arr)
    {
        // code here
        
        int maxi = 0 , count1 = 0, count0 = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 1)
            {
                count1++;
                maxi = max(maxi,count1);
                count0 = 0;
            }
            else
            {
                count0++;
                maxi = max(maxi,count0);
                count1 = 0;
            }
        }
        return maxi;

        
    }
};