#include <bits/stdc++.h>
using namespace std;

int solve(stack<int> &st1, stack<int> &st2)
{
    if(!st1.empty())
    {
        return st1.top();

    }
    else if(!st2.empty())
    {
        while(!st2.empty())
        {
            int value = st2.top();
            st1.push(value);
            st2.pop();
        }
        return st1.top();

    }
    return 0;
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        stack<int> st1;
        stack<int> st2;

        int n;
        cin >> n;
        while(n--)
        {
            string query;
            cin >> query;

            if (query == "push")
            {
                int x;
                cin >> x;
                st2.push(x);
            }
            else if(query == "pop")
            {
               int val = solve(st1, st2);
               cout << val << "\n";
               st1.pop();
            }
            else
            {
                int val = solve(st1, st2);
                cout << val << "\n";
            }
        }
    }
}