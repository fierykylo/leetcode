#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

class Solution 
{
public:
    bool possible(vector<int>& v, int m, int k, int day)
{
    int bouquet = 0, count = 0;

    for (int x : v)
    {
        if (x <= day)
        {
            count++;
        }
        else
        {
            bouquet += (count / k);
            if (bouquet >= m) return true;
            count = 0;
        }
    }
    bouquet += (count / k);
    return (bouquet >= m);
}

    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int n = bloomDay.size();
        if (n < 1LL * m * k)
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