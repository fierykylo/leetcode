#include <bits/stdc++.h>
using namespace std;

#define int long long

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B


signed main(void)
{
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int key;
    cin >> key;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == key)
        {
            cout << i << "\n";
            return 0;
        }
    }
    cout << "-1\n";
}