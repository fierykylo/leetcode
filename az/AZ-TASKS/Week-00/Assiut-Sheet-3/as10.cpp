#include <bits/stdc++.h>
using namespace std;

#define int long long
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mp[val]++;
    }
    int min = INT_MAX;
    int mincnt = 0;
    for(auto it : mp)
    {
        if(it.first < min)
        {
            min = it.first;
            mincnt = it.second;
        }
    }
    if(mincnt % 2 != 0)
    {
        cout << "Lucky\n";
    }
    else{
        cout << "Unlucky\n";
    }
}