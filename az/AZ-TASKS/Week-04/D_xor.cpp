#include <bits/stdc++.h>
using namespace std;

#define int long long

auto solve(int a, int b, int q)
{
    if (q % 3 == 1)
    {
        return a;
    }
    else if (q % 3 == 2)
    {
        return b;
    }
    else
    {
        return a ^ b;
    }
}

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, q;
    cin >> a >> b >> q;
    cout << solve(a, b, q) << endl;
}