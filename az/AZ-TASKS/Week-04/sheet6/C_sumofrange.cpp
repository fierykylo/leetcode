#include <bits/stdc++.h>
using namespace std;

#define int long long
int sumTo(int n)
{
    return n * (n + 1) / 2;
}
int evensumTo(int n)
{
    int k = n / 2;
    return k*(k + 1);
}

auto solve(int a, int b)
{
    int sum = sumTo(b) - sumTo(a - 1);
    int evensum = evensumTo(b) - evensumTo(a - 1);
    int oddsum = sum - evensum;
    cout << sum << "\n" << evensum << "\n" << oddsum << "\n";
}

signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    if(a > b)
    {
        swap(a, b);
    }
    solve(a, b);
}