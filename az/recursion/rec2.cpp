#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

void solve(int n)
{
    if(n <= 0) return;
    solve(n - 1);
    cout << n << endl;
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    solve(n);
}