#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n, 0);
        for (int i = 1; i <=n; i++)
        {
            nums[i - 1] = i;
        }
        do
        {
            for (auto x : nums)
            {
                cout << x << " ";
            }
            cout << "\n";
        }
        while(next_permutation(nums.begin(), nums.end())); 
    }
}