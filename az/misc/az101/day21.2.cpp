#include <bits/stdc++.h>
using namespace std;

// the matrix
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
  
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        // nnow i will calculate the sum
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            sum1 += arr[i][i];
            sum2 += arr[i][n - i - 1];
        }
        
        int result = abs(sum1 - sum2);
        cout << result << endl;
    }
}