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


        string s, t;
        cin >> s >> t;
        int n = s.length();
        int m = t.length();
        int i = 0;
        int j = 0;
        string ans = "";
        while(i < n && j < m)
        {
            ans += s[i];
            ans += t[j];
            i++; j++;
        }
        while(i < n)
        {
            ans += s[i];
            i++;
        }
        while(j < m)
        {
            ans += t[j];
            j++;
        }
        cout << ans << "\n";
    }
}