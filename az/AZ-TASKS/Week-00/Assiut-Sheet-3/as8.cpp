#include <bits/stdc++.h>
using namespace std;

#define int long long
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H

signed main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

}