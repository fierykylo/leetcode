#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
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
        long long product = 1;
        for (int i = 0; i < n; i++)
        {
            long long num;
            cin >> num;
            product = (product * num) % mod;
        }
         cout << product << "\n";
    }
   
}