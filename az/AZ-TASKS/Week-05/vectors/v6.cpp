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

    int ans = INT_MAX;
    int leftmin = v[0] - 1;
    for(int j = 1; j < n; j++)
    {
        ans = min(ans, leftmin + v[j] + (j + 1));
        leftmin = min(leftmin, v[j] - (j + 1));
    }
    cout << ans << "\n";  
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