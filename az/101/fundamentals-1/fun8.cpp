#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    cout << "floor " << a << " / " << b << " = " << floor((double)a / b) << "\n";
    cout << "ceil " << a << " / " << b << " = " << ceil((double)a / b) << "\n";
    cout << "round " << a << " / " << b << " = " << round((double)a / b) << "\n";
}