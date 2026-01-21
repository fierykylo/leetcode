#include <bits/stdc++.h>
using namespace std;

// code to find the largest element in an array

int main(void)
{
    vector<int> arr = {10, 20 , 39 , 48 , 58 , 84, 94 , 58 , 393 , 392, 19,1829};
    int n = arr.size();
    int largest = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest << endl;
}