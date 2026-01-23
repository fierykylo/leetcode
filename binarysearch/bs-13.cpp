#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:

    int findmin(vector<int> &v)
    {
        int mini = INT_MAX;
        for(int x : v)
        {
            mini = min(x,mini);
        }
        return mini;
    }
    int findmax(vector<int> &v)
    {
        int maxno = INT_MIN;
        for (int x : v)
            maxno = max(x, maxno);
        return maxno;
    }

    bool possible(vector<int> &v, int m, int k, int day)
    {
        int n = v.size();
        int bouquet = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= day)
            {
                count++;
            }
            else
            {
                bouquet += (count / k);
                count = 0;
            }
        }
        bouquet += (count / k);
        if (bouquet >= m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        int low = findmin(bloomDay);
        int high = findmax(bloomDay);
        int n = bloomDay.size();
        if (n < (m * k))
        {
            return -1;
        }
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (possible(bloomDay,m,k,mid) == true)
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