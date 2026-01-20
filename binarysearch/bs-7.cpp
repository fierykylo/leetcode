#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> bs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> bs[i];
    }
    int high = bs.size() - 1;
    int low = 0;
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (bs[mid] > bs[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    cout << low;
}
    
