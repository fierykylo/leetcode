#include <bits/stdc++.h>
using namespace std;
#define int long long

//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    n = n % 10;
    m = m % 10;
    cout << (n + m) << "\n";
}