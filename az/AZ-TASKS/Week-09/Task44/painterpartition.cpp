#include <bits/stdc++.h>
using namespace std;
#define int long long 
vector<int> a;
int n, k;

auto check(int mid)
{
    int painter = 0, left = 0;
    for (int i = 0; i < n; i++)
    {
        if(left >= a[i])
        {
            left -= a[i];
        }
        else
        {
            painter++;
            left = mid;
            left -= a[i];
        }
        if(painter > k) return false;
    }
    return true;

}
auto solve()
{
    cin >> n >> k;
    a.resize(n);
    int mx = 0, sum = 0;
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        sum += a[i];
    }
    int lo = mx, hi = sum;
    int ans = sum;
    while(lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(check(mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
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