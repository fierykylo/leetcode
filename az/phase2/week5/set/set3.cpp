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
        int n, m;
        cin >> n >> m;
        set<int> s;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            if (s.count(x))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
            s.insert(x);
        }

    }
}