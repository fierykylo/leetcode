#include <bits/stdc++.h>
using namespace std;
#define int long long 

int check(int mid, vector<int> &v, int n)
{
    if(mid == n - 1)
    {
        return 1;
    }
    if(v[mid] < v[n - 1])
    {
        return 1;
    }
    return 0;
}
auto solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int lo = 0, hi = n - 1;
    int ans = 0;
    while(lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if(check(mid, arr, n) == 1)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
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
        cout << solve() << "\n";
    }
}