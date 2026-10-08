#include <bits/stdc++.h>
using namespace std;
#define int long long 

auto solve()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = true;
    int cnt = 0;
    
    while(true)
    {
        for(int i = 0; i < n; i++){
            if(v[i] % 2 != 0)
            {
                return cnt;
            }
            v[i] /= 2;
        }
        cnt++;
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
        cout << solve() << endl;
    }
}