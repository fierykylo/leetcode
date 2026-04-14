#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/1829/B

int main(void)
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
        vector<int> freq(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> freq[i];
        }
        int cnt = 0;
        int maxcnt = 0;
        for(auto it : freq)
        {
            if (it == 0)
            {
                cnt++;
                maxcnt = max(maxcnt, cnt);
            }
            else if(it == 1)
            {
                cnt = 0;
            }
        }
        cout << maxcnt << "\n";
    }
}