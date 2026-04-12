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
        multiset<int> ms;

        while(q--)
        {
            string query;
            cin >> query;

            if (query == "add")
            {
                int x;
                cin >> x;
                ms.insert(x);
            }
            else if(query == "eraseall")
            {
                int x;
                cin >> x;
                ms.erase(x);
            }
            else if(query == "erase")
            {
                int x;
                cin >> x;
                auto it = ms.find(x);
                if(it != ms.end())
                {
                    ms.erase(it);
                }

            }
            else if(query == "find")
            {
                int x; 
                cin >> x;
                if(ms.find(x) != ms.end())
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else if(query == "count")
            {
                int x;
                cin >> x;
                cout << ms.count(x) << "\n";
            }
            else if(query == "empty")
            {
                ms.clear();
            }
            else
            {
                for(auto it : ms)
                {
                    cout << it << " ";
                }
                cout << "\n";
            }
        }
    }
}