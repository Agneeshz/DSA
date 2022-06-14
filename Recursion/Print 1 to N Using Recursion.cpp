#include <bits/stdc++.h>
using namespace std;

void Print1toN(int n)
{
    if(n==0)
        return;
    Print1toN(n-1);
    cout<<n<<" ";
}

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    Print1toN(n);
    return 0;
}