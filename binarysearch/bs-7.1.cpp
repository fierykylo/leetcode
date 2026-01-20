#include <bits/stdc++.h>
using namespace std;
// gfg version 
// https://www.geeksforgeeks.org/problems/rotation4723/1
class Solution
{
public:
    int findKRotation(vector<int> &arr)
    {
        int high = arr.size() - 1;
        int low = 0;
        int mid;
        while (low < high)
        {
            mid = (low + high) / 2;
            if (arr[mid] > arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        cout << low;
    }
};
