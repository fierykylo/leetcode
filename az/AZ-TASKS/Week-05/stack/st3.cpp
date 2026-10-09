#include <bits/stdc++.h>
using namespace std;
#define int long long 

auto solve()
{
    string s;
    cin >> s;
    stack<char> st;
    int cnt = 0;
    for(auto c : s)
    {
        //pushing if bracket is open
        if(c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            //if stack is empty dont return false increase count
            if(st.empty())
            {
                cnt++;
                continue;
            }
            char open = st.top();
            st.pop();
            if(c == ')' && open != '(' || c == '}' && open != '{' || c == ']' && open != '[')
            {
                cnt++;
            }
        }
    }
    cnt += st.size();
    cout << cnt << endl;
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