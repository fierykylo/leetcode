#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/second-largest3735/1
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) 
    {
        // code here"
        int largest = arr[0];
        int secondl = -1;
        int n = arr.size();
        
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
            {
                secondl = largest;
                largest = arr[i];
            }
            else if (arr[i] > secondl && arr[i] != largest)
            {
                secondl = arr[i];
            }
            
        }
        return secondl;
        
    }
};