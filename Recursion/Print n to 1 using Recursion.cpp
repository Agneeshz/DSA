#include <bits/stdc++.h>
using namespace std;

void PrintBack(int x)
{
   if(x == 0)
    return;
   cout<<x<<" ";
   PrintBack(x-1);
}

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif    
    int n;
    cin>>n;
    PrintBack(n);
    return 0;
}