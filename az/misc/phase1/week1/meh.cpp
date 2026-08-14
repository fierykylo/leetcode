#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;

        do
        {
            cout << num % 10 << " ";
            num /= 10;
        } while (num > 0);

        cout << "\n";
        cout << "\n";
    }
}