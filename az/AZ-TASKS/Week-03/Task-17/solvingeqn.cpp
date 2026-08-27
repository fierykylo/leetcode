#include <bits/stdc++.h>
using namespace std;

#define int long long
// solving equation az


//binary exponentiation 
int binpow(int a, int b, int mod)
{
    if(b == 0) return 1;
    else if(b % 2 != 0)
    {
        return (a * binpow(a, b - 1, mod) % mod);
    }
    else
    {
        int temp = binpow(a, b/2, mod);
        return (temp * temp % mod);
    }

}

//operator ka precedence
int precedence(char op)
{
    if(op == '+' || op == '-')
    {
        return 1;
    }
    return 2;
}

auto result(int a, int b, int p, char op)
{
    int ans;
    if(op == '+')
    {
        ans = (a + b) % p;
    }
    else if(op == '-')
    {
        ans = (a - b) % p;
        return (ans + p) % p;
    }
    else if(op == '*')
    {
        ans = (a * b) % p;
    }
    else{
        ans = (a * binpow(b, (p - 2), p));
    }
    return (ans % p);
}

auto solve(int a, int b, int c, int p, char op1, char op2)
{
    if(precedence(op1) >= precedence(op2))
    {
       int ans = result(a,b,p,op1);
       ans = result(ans, c, p, op2);
       return ans;
    }
    else{
        int ans = result(b, c, p, op2);
        ans = result(a, ans, p, op1);
        return ans;
    }
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
        int a, b, c, p;
        char op1, op2, open, close;
        string mod;
        cin >> open >> a >> op1 >> b >> op2 >> c >> close >> mod >> p;
        a %= p;
        b %= p;
        c %= p;
        int ans = solve(a,b,c,p, op1, op2);
        cout << ans << "\n";
    }

}