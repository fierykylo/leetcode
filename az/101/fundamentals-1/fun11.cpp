#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char c;
    cin >> c;
    int val = c;
    (val < 122) ? val++ : val = 97;
    c = val;
    cout << c << "\n";
}