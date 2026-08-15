#include <bits/stdc++.h>
using namespace std;

#define int long long

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
signed main(void)
{
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = n - 1;
    while(l < r)
    {
        if(v[l] != v[r])
        {
            cout << "NO\n";
            return 0;
        }
        l++;
        r--;
    }
    cout << "YES\n";
}