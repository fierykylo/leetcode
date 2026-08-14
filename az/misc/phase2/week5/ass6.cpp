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
        queue <int> q;
        while(n--)
        {
            string query;
            cin >> query;
            if (query == "add")
            {
                int x;
                cin >> x;
                q.push(x);
            }
            else if (query == "remove")
            { 
                if(!q.empty())
                {
                    q.pop();
                }
            }
            else
            {
                if(!q.empty())
                {
                    cout << q.front() << "\n";
                }
                else
                {
                    cout << "0\n";
                }
            }
        }
    }
}