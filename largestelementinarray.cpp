//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr)
    {
        // code here
        int largest = arr[0];
        for(int i : arr)
        {
            if(i > largest)
            {
                largest = i;
            }
        }
        return largest;
    }
};
