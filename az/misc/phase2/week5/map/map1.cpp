#include <bits/stdc++.h>
using namespace std;

int main(void)
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
        map<string, int> mp;
        while (q--)
        {
            string query;
            cin >> query;

            if (query == "add")
            {
                string name;
                cin >> name;
                int marks;
                cin >> marks;

                mp[name] = marks;
            }
            else if(query == "erase")
            {
                string name;
                cin >> name;
                if(mp.find(name) != mp.end())
                {
                    mp.erase(name);
                }
            }
            else
            {
                string name;
                cin >> name;
                if(mp.find(name) != mp.end())
                {
                    cout << mp[name] << endl;
                }
                else
                {
                    cout << "0\n";
                }
            }
        }
    }
}
