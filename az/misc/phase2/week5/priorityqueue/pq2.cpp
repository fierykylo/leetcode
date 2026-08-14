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
        int bags, k;
        cin >> bags >> k;
        priority_queue<int> pq;
        for (int i = 0; i < bags; i++)
        {
            int candy;
            cin >> candy;
            pq.push(candy);
        }
        long long cnt = 0;
        while(k--)
        {
            int val = pq.top();
            if(val == 0) break;
            pq.pop();
            cnt += val;
            pq.push(val/2);         
        }
        cout << cnt << endl;
    }
}