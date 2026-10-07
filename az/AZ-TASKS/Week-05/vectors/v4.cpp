#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

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
        int cnt = 0;
        vector <int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mini = *min_element(arr.begin(), arr.end());
        for (auto x : arr)
        {
            if (x == mini)
            {
                cnt++;
            }
        }
        cout << ((cnt % 2 == 0) ? "Unlucky" : "Lucky") << "\n";   
    }
}