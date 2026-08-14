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
        string s;
        getline(cin, s);
        int arr[26] = {0};

        for (auto ch : s)
        {
            int index = ch - 97;
            arr[index]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if(arr[i] != 0)
            {
                char ch = i + 97;
                cout << ch << " : " << arr[i] << "\n";
            }
        }
    }
}