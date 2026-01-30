#include <bits/stdc++.h>
using namespace std;

// getting good at unordered maps

int main(void)
{
    unordered_map<int, int> map1;

    vector<int> nums = {2,7,11,15};
    int target = 9;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int needed = target - nums[i];
        auto it = map1.find(needed);
        if (it != map1.end())
        {
            cout << i << "" << map1[needed];
        }
        else
        {
            map1[nums[i]] = i;
        }
    }
}