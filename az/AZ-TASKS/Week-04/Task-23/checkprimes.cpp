#include <bits/stdc++.h>
using namespace std;
#define int long long 


auto solve(int n)
{
    if(n == 1)
    {
        cout << "NO\n";
        return;
    } 
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0 && (i != n))
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}


signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
}