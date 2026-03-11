#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; 
    cin >> n;
    //bit manipulation kinda stuff
    // n  & (n-1) good conditon
    if (n > 0 && ((n & (n - 1)) == 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


}