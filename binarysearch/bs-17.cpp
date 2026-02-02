#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPlace(vector<int> &d, int cows, int distance)
    {
        int count = 1;
        int n = d.size();
        int lastpos = d[0];
        for (int i = 1; i < n; i++)
        {
            if (d[i] - lastpos >= distance)
            {
                lastpos = d[i];
                count++;
            }
        }
        return (count >= cows);
    }
    int aggressiveCows(vector<int> &stalls, int k) 
    {
        // code here
        sort(stalls.begin(), stalls.end());
        int low = 1;
        int n = stalls.size();
        int high = stalls[n - 1] - stalls[0];
        while (low <= high)
        {
            int mid = low +  (high - low) / 2;

            if (canPlace(stalls, k, mid))
            {
                low = mid + 1;
            }
            else 
            {
                high = mid - 1;
            }
        }
        return high;
        
    }
};

int main(void)
{
    Solution s;
    vector<int> stalls = {10, 1, 2, 7, 5};
    cout << s.aggressiveCows(stalls, 3);
}