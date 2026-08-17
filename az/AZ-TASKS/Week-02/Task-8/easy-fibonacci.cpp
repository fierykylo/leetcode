#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        { 
            cout << "0";
            break;
        }
        if (n == 2)
        {
            cout << "0 1" << endl;
            break;
        }
        int a = 0;
        int b = 1;
        cout << "0 1 ";
        for (int i = 0; i < (n - 2); i++)
        {
            int c = a + b;
            cout <<  c << " ";
            a = b;
            b = c;
        }
    }
}