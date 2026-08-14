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
        if(n == 1)
        {
            int x;
            cin >> x;
            cout << x << "\n";
            break;
        }
        int cost = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        while(pq.size() != 1)
        {
            int val1 = pq.top();
            pq.pop();
            int val2 = pq.top();
            pq.pop();
            cost += val1 + val2;
            pq.push(val1 + val2);
        }
        cout << cost << endl;
    }
}