#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& arr, int k) 
    {
        int n = arr.size();
        k = k % n;
        //reversing d elements
        for(int i = 0, j = n - k - 1; i < j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        for(int i = n - k, j = n - 1; i < j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        for(int i = 0, j = n - 1; i < j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
};