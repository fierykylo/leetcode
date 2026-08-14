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
        
        int n , m;
        cin >> n >> m;
        int size = n * m;
        int arr[size] = {0};
        for (int i = 0; i < n * m; i++)
        {
            cin >> arr[i];
        }
        int x;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == x)
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            cout << "will not take number\n";
        }
        else 
        {
            cout << "will take number\n";
        }
    }
}