#include <bits/stdc++.h>
using namespace std;

// uses an extra loop to verify

class Solution {
  public:
    int majorityElement(vector<int>& arr)
    {
        // code here
        int ele;
        int cnt = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (cnt == 0)
            {
                ele = arr[i];
                cnt++;
            }
            else if (arr[i] == ele)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        int cnt1 = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == ele)
            {
                cnt1++;
            }
        }
        
        if (cnt1 > (arr.size() / 2))
        {
            return ele;
        }
        else 
        {
            return -1;
        }
        
    }
};