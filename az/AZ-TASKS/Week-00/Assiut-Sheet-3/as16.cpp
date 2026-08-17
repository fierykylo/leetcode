#include <bits/stdc++.h>
using namespace std;

#define int long long 
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P

auto solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int op = 0;
    bool flag = true;
    while(flag)
    {
        for(auto it: v)
        {
            if(it % 2 != 0)
            {
                flag = false;
                cout << op << "\n";
            }
            else{
                it /= 2;
            }
        }
        op++;
    }
}

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}