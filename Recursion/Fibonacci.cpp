#include <bits/stdc++.h>
using namespace std;

int getSum(int n)
{
    if(n<=1)
        return n;
    return getSum(n-1)+getSum(n-2);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n=4;
    cout<<"getSum(n)";
    return 0;
}