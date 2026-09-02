#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    cout << (isPrime(n) ? "YES\n" : "NO\n");

    return 0;
}