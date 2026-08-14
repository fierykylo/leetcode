#include <bits/stdc++.h>
using namespace std;

#define int long long

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    for(auto it: v)
    {
        sum += it;
    }
    cout << abs(sum);
}