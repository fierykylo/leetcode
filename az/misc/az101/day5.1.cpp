#include <bits/stdc++.h>
using namespace std;

//welcome conditions
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;
       cout << (a >= b ? "Yes\n" : "No\n");
    }
}