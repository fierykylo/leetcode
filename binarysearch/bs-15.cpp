#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

class Solution 
{
public:

    int daysRecquired(vector<int> &weigh, int mid)
    {
        int n = weigh.size();
        int load = 0;
        int count = 1;
        for(int i = 0; i < n; i++)
        {
            if ((load + weigh[i]) > mid)
            {
                count++;
                load = weigh[i];
            }
            else
            {
                load += weigh[i];
            }
        }
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0LL);

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (daysRecquired(weights, mid) <= days)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};