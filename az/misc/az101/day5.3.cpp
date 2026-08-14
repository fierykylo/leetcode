#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;

    if (isdigit(x))
        cout << "IS DIGIT";
    else
    {
        cout << "ALPHA\n";
        cout << (isupper(x) ? "IS CAPITAL" : "IS SMALL");
    }
    return 0;
}