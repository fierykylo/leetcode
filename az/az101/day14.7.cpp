#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mini = INT_MAX;
        int minIndex = 0;
        int maxi = INT_MIN;
        int maxIndex = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < mini)
            {
                mini = arr[i];
                minIndex = i;
            }
            if (arr[i] > maxi)
            {
                maxi = arr[i];
                maxIndex = i;
            }
        }
        swap (arr[minIndex], arr[maxIndex]);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}