#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findmax(vector<int> &v)
    {
        int maxno = INT_MIN;
        for (int x : v)
            maxno = max(x, maxno);
        return maxno;
    }

    long long totalhours(vector<int> &v, int hourly)
    {
        long long totalh = 0;
        for (int x : v)
        {
            totalh += (x + hourly - 1) / hourly;
        }
        return totalh;
    }

    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int low = 1;
        int high = findmax(piles);

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            long long totalH = totalhours(piles, mid);

            if (totalH <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};
