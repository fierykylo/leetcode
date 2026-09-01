#include <bits/stdc++.h>
using namespace std;

//https://cses.fi/problemset/result/18583141/

#define int long long
const int mod = 1e9 + 7;

int binpow(int a, int b, int mod)
{
    if(b == 0) return 1;
    if(b % 2 != 0)
    {
        return (a * binpow(a, b - 1, mod) % mod);
    }
    else{
        int temp = binpow(a, b/2, mod);
        return (temp * temp) % mod;
    }


}
auto solve(int a, int b)
{
    return binpow(a, b, mod);
}

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << "\n";
    }
    
}