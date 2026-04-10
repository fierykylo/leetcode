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
       int q;
       cin >> q;
       priority_queue<int> pq;
       while(q--)
       {
            string query;
            cin >> query;
            if (query == "add")
            {
                int x;
                cin >> x;
                pq.push(x);
            }
            else if(query == "print")
            {
                if(!pq.empty())
                {
                    cout << pq.top() << "\n";
                }
                else 
                {
                    cout << "0\n";
                }
            }
            else
            {
                if(!pq.empty())
                {
                    pq.pop();
                } 
            }
       } 
    }
}