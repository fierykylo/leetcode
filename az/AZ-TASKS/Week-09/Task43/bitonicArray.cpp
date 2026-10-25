#include <bits/stdc++.h>
using namespace std;
#define int long long 

bool check(vector<int> &arr, int mid, int n)
{
    if (mid == n - 1) return true;
    if(arr[mid ] > arr[mid + 1]) return true;
    return false;
}

int bs(vector<int>&arr, int lo, int hi, int key, bool asc)
{
    while(lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == key) return mid;
        if((arr[mid] < key) == asc) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

auto solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    //finding peak
    int peakLo = 0, peakHi = n - 1;
    int peak = 0;
    while(peakLo <= peakHi)
    {
        int mid = peakLo + (peakHi - peakLo) / 2;
        if(check(arr, mid, n))
        {
            peak = mid;
            peakHi = mid - 1;
        }
        else{
            peakLo = mid + 1;
        }
    }

    while(q--)
    {
        int key;
        cin >> key;
        int val1 = bs(arr, 0, peak, key, true);
        int val2 = bs(arr, peak + 1, n - 1, key, false);
        if (val1 >= 0) cout << val1 + 1;
        if (val1 >= 0 && val2 >= 0) cout << " ";   
        if (val2 >= 0) cout << val2 + 1;
        cout << "\n";;
    }
}
signed main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}