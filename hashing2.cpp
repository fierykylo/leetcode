#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int q;
    cin >> q;
    while(q--)
    {
        int num;
        cin >> num;
        cout << mpp[num] << "\n";
    }

}