#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isSorted(vector<int>& arr)
    {
        // code here
        for (int i = 0; i < arr.size() - 1; i++)  // Changed here
        {
            if (arr[i] > arr[i + 1])  // Simplified condition
            {
                return false;
            }
        }
        return true;
    }
};