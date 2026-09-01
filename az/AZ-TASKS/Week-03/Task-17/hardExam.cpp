#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/742/A

#define int long long
const int a = 1378; 
const int mod = 10;

int binpow(int a, int n, int mod)
{
    if(n == 0) return 1;
    if(n % 2 != 0)
    {
        return (a * binpow(a, n - 1, mod) % mod);
    }
    else{
        int temp = binpow(a, n/2, mod);
        return temp * temp % 10;
    }
}
auto solve(int n)
{
    int ans = binpow(a, n, mod);
    ans = ans % 10;
    return ans;
}

signed main(void)
{
    int n;
    cin >> n;
    int ans = solve(n);
    cout << ans << endl;
}