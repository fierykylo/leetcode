#include <bits/stdc++.h>
using namespace std;
#define int long long 

auto solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int minel = INT_MAX;
    int minind = -1;
    for(int i = 0; i < n; i++)
    {
        if(v[i] < minel)
        {
            minel = v[i];
            minind = i + 1;
        }
    }
    cout << minel << " " << minind << endl;
}
signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}