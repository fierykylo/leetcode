#include <bits/stdc++.h>
using namespace std;
#define int long long 


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
        map <int, int> mp;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int cnt = 0;
        for (auto it: mp)
        {
            if(it.first != it.second)
            {
                if(it.second > it.first)
                {
                    cnt += it.second - it.first;
                }
                else
                {
                    cnt+= it.second;
                }
            }
        }
        cout << cnt << endl;
    }
}