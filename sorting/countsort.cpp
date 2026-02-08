#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n), output(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int mini = *min_element(nums.begin(), nums.end());
    int maxi = *max_element(nums.begin(), nums.end());

    int range = maxi - mini + 1;
    vector<int> temp(range, 0);

    // Step 1: frequency
    for (int i = 0; i < n; i++)
        temp[nums[i] - mini]++;

    // Step 2: prefix sum
    for (int i = 1; i < range; i++)
        temp[i] += temp[i - 1];

    // Step 3: stable placement (right to left)
    for (int i = n - 1; i >= 0; i--)
    {
        int idx = nums[i] - mini;
        int pos = temp[idx] - 1;
        output[pos] = nums[i];
        temp[idx]--;
    }

    // Optional: print
    for (int x : output)
        cout << x << " ";
}
