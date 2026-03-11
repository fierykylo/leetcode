#include <bits/stdc++.h>
using namespace std;

int main(void)
{   
    int a , b , c;
    cin >> a >> b >> c;
    int maxi = max({a, b, c});
    int mini = min({a,b,c});
    cout << mini << " " << maxi << endl;
    
}