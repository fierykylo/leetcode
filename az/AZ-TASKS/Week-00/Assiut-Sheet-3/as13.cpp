#include <bits/stdc++.h>
using namespace std;

#define int long long
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

auto solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;
    int minind, maxind;
    for(int i = 0; i < n; i++)
    {
        if(v[i] > max)
        {
            max = v[i];
            maxind = i;
        }
        else if(v[i] < min)
        {
            min = v[i];
            minind = i;
        }
    }
    swap(v[maxind], v[minind]);
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";
}

signed main(void)
{
    solve();
}