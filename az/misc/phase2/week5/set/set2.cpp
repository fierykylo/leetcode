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
        int q;
        cin >> q;
        set<int> s;
        while(q--)
        {
            string query;
            cin >> query;

            if (query == "add")
            {
                int x;
                cin >> x;
                s.insert(x);
            }
            else if(query == "erase")
            {
                int x;
                cin >> x;
                if(s.count(x))
                {
                    s.erase(x);
                }
            }
            else if(query == "find")
            {
                int x;
                cin >> x;
                auto it = s.find(x);
                if(it != s.end())
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else if (query == "print")
            {
                for (auto it : s)
                {
                    cout << it << " ";
                }
                cout << "\n";
            }
            else
            {
                s.clear();
                
            }

        }
    }
}