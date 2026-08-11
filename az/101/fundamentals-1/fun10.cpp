#include <bits/stdc++.h>
using namespace std;

#define int long long
//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A


signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double x, p;
    cin >> x >> p;
    double t = 100 - x;
    double n = p * (100 / t);
    cout << fixed << setprecision(2) << n << "\n";
}