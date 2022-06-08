#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,op=0;
        cin>>a>>b;
        if(a%3==0 || b%3==0)
            cout<<0<<endl;
        else
        {
            while(0<1){
                // cout<<"in";
                a=abs(a-b);
                op++;
                if(a%3==0)
                    break;
                b=abs(a-b);
                op++;
                if(b%3==0)
                    break;
            }
            cout<<op<<endl;
        }
    }
    return 0;
}