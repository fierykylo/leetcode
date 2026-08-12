#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
#define int long long

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, a;
    cin >> n >> k >> a;
    int ans = (n * k);
    if ((ans % a) != 0)
    {
        cout << "double\n";
        return 0;
    }
    ans = ans / a;
    if ( ans >= (-2147483648) && ans <= 2147483647)
    {
        cout << "int\n";
    }
    else
    {
        cout << "long long\n";
    }
}