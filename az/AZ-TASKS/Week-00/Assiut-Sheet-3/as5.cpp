#include <bits/stdc++.h>
using namespace std;

#define int long long 
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

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

    int min = v[0];
    int minind = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] < min)
        {
            min = v[i];
            minind = i;
        }
    }
    cout << min << " " << (minind + 1) << "\n";
}