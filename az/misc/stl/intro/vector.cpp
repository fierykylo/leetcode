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
        vector<int> a;
        while(q--)
        {
            string query;
            cin >> query;
            if (query == "add")
            {
                int num;
                cin >> num;
                a.push_back(num);
            }
            else if (query == "print")
            {
                int num;
                cin >> num;
                if(num >= 0 && num < a.size())
                {
                    cout << a[num] << "\n";
                }
                else
                {
                    cout << "0\n";
                }
            }
            else if(query == "remove")
            {
                if(a.size() > 0)
                {
                    a.pop_back();
                }
            }
            else
            {
                a.clear();
            }
        }
    }
}