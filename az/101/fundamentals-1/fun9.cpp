#include <bits/stdc++.h>
using namespace std;

#define int long long 

//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mul = (a % 100) * (b % 100) * (c % 100)* (d % 100);
    int ans = mul % 100;
    cout << setw(2) << setfill('0') << ans << "\n";
}