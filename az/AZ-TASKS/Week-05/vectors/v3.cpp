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
    int i = 0, j = (n - 1);
    while(i < j)
    {
        if(v[i] != v[j])
        {
            cout << "NO\n";
            return;
        }
        i++;
        j--;
    }
    cout << "YES\n";
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