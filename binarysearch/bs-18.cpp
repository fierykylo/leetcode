#include <bits/stdc++.h>
using namespace std;

//https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

class Solution {
  public:
    int studentCount(vector<int> &arr, int pages)
    {
        int studentCnt = 1; int studentPg = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int temp = (studentPg + arr[i]);
            if (temp <= pages)
            {
                studentPg += arr[i];
            }
            else
            {
                studentCnt++;
                studentPg = arr[i];
            }
        }
        return studentCnt;
    }
    int findPages(vector<int> &arr, int k) 
    {
        // code here
        int n = arr.size();
        if (n < k) return -1;
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0LL);

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if (studentCount(arr, mid) <= k)
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