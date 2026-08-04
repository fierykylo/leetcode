#include <bits/stdc++.h>
using namespace std;
#define int long long 


signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        double radius;
        cin >> radius;
        double area = radius * radius *  3.141592653;
        cout << fixed << setprecision(9) << area << "\n";
    }
}