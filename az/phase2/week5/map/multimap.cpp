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
        multimap<string, int> mp;
        while(q--)
        {
            string query;
            cin >> query;
            if(query == "add")
            {
                string name;
                cin >> name;
                int x;
                cin >> x;
                mp.insert({name, x});
            }
            else if (query == "erase")
            {
                string name;
                cin >> name;
                auto it = mp.find(name);
                if (it != mp.end())
                {
                    mp.erase(it);
                }
            }
            else if (query == "eraseall")
            {
                string name;
                cin >> name;
                mp.erase(name);
            }
            else
            {
                string name;
                cin >> name;
                auto it = mp.find(name);
                if(it != mp.end())
                {
                    cout << it->second << "\n";
                }
                else
                {
                    cout << "0\n";
                }
            }
        }
    }
}