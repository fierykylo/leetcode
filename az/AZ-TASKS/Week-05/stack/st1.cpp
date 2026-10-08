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
        int op;
        cin >> op;
        stack <int> st;
        while(op --)
        {
            string query; 
            cin >> query;
            if(query == "add")
            { 
                int x;
                cin >> x;
                st.push(x);
            }
            else if(query == "remove")
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                if(!st.empty())
                {
                    cout << st.top() << "\n";
                }
                else
                {
                    cout << "0\n";
                }
            }
        }
    }
}