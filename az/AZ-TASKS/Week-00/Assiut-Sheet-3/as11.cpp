#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
#define int long long

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += s[i] - '0';
    }
    cout << sum << "\n";

}