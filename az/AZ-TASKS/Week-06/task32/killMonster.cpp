#include <bits/stdc++.h>
using namespace std;

#define int long long

struct Monster{
    int army, ded;
};

bool cmp(Monster a, Monster b)
{
    return b.army + a.ded < a.army + b.ded;
}

auto solve()
{
    int n;
    cin >> n;
    vector<Monster> monsterlist(n);
    for(int i = 0; i < n; i++)
    {
        cin >> monsterlist[i].army >> monsterlist[i].ded;
    }
    sort(monsterlist.begin(), monsterlist.end(), cmp);
    int need = 0, soldiers = 0, curr = 0;
    for(int i = 0; i < n; i++)
    {
        need = monsterlist[i].army - curr;
        soldiers += need;
        curr += need - monsterlist[i].ded;
    }

    cout << soldiers << "\n";
}

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}