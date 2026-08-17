#include <bits/stdc++.h>
using namespace std;

#define int long long
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

auto fibonacci()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int c;
    if(n == 1)
    {
        cout << a << "\n";
        return;
    }
    if(n == 2)
    {
        cout << b << "\n";
        return;
    }
    for(int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << "\n";
}


signed main(void)
{
    fibonacci();
}