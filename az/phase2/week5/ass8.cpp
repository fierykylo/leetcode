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
        map<string, int> students;
        while(n--)
        {
            string query;
            cin >> query;
            if (query == "add")
            {
                string name;
                cin >> name;
                int marks;
                cin >> marks;
                students[name] = marks;
            }
            else if (query == "print")
            {
                string name;
                cin >> name;
                if(str.find(name) != mp.end())
                {

                }
            }
        }
    }
}