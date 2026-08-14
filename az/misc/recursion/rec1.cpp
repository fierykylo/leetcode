#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
void recur(int n)
{
    if(n <= 0) return;
    cout << "I love Recursion\n";
    recur(n-1);
}
int main(void)
{
    int n;
    cin >> n;
    recur(n);
}