#include <bits/stdc++.h>
using namespace std;

#define int long long

auto solve(int n)
{
    if(n > 0 && (n & (n - 1)) == 0)
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

signed main(void)
{
    int n;
    cin >> n;
    solve(n);
}