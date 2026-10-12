#include <bits/stdc++.h>
using namespace std;
#define int long long 

auto solve()
{
    int n;
    cin >> n;
    vector <int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += a[i] * b[i];
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