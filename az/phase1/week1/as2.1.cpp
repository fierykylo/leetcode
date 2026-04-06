#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
//codeforces two intervals
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if (l1 > r1 || l2 > r2 || l2 > r1 || l1 > r2)
        {
            cout << "-1\n";
        }
        else 
        {
            int start = max(l1, l2);
            int end = min(r1, r2);
            cout << start << " " << end << "\n";
        }
    }
}