#include <bits/stdc++.h>
using namespace std;
#define int long long 

//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

signed main(void)
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
        int sum = n * (n + 1) / 2;
        cout << sum << "\n";
    }
}