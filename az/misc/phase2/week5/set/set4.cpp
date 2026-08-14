#include <bits/stdc++.h>
using namespace std;

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
       set<int> a;
       set<int> b;

       int n, m;
       cin >> n >> m;

       for (int i = 0; i < n; i++)
       {
            int x;
            cin >> x;
            a.insert(x);    
       }
       for (int i = 0; i < m; i++)
       {
            int x;
            cin >> x;
            b.insert(x);
       }

       //for union just add both of them
       set<int> uni = a;
       uni.insert(b.begin(), b.end());

       for(auto it: uni)
       {
            cout << it << " ";
       }
       cout << "\n";

       //intersection

        set<int> intersect;
        for(auto it : a)
        {
            if(b.count(it))
            {
                intersect.insert(it);
            }
        }
        for(auto it: intersect)
       {
            cout << it << " ";
       }
       cout << "\n";

       //set difference
       set<int> diff;
       for(auto it : a)
       {
            if(!b.count(it))
            {
                diff.insert(it);
            }
       }
       for(auto it: diff)
       {
            cout << it << " ";
       }
       cout << "\n";
    }
}