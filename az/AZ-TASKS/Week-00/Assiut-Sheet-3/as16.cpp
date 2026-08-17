#include <bits/stdc++.h>
using namespace std;

#define int long long 
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P

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
    int ans = LLONG_MAX;
   for(auto x : v)
   {
        int cnt = 0;
        while(x % 2 == 0)
        {
            x /= 2;
            cnt++;
        }
        ans = min(cnt, ans);
   }
   cout << ans << "\n";   
}

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}