#include <bits/stdc++.h>
using namespace std;
#define int long long 

auto solve(int n)
{
    int cnt = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if(n / i != i)
            {
                cnt+=2;
            }
            else
            {
                cnt++;
            }
        }   
    }
    return cnt;
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
        cout << solve(n) << endl;
    }
}