#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
#define int long long

void solve()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = s.length();
    if (n != a + b + 1)
    {
        cout << "No\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        char c = s[i];

        if (i == a)
        {
            if (c != '-')
            {
                cout << "No\n";
                return;
            }
        }
        else if (!(c >= '0' && c <= '9'))
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

signed main(void)
{
    solve();
}