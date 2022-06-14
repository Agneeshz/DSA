#include <bits/stdc++.h>
using namespace std;

void Print1toN(int n)
{
    if(n==0)
        return;
    Print1toN(n);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    Print1toN(n);
    return 0;
}