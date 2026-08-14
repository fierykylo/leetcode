#include <bits/stdc++.h>
using namespace std;

#define int long long
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(auto &it : v)
    {
        if(it > 0)
        {
            it = 1;
        }
        else if(it < 0)
        {
            it = 2;
        }
    }
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";
}