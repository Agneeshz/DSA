#include<iostream>
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        int a;
        int b;
        cin>>a;
        cin>>b;
        x=a+2*b+1;
        if(a==0)
            cout<<1;
        else
            cout<<x;
        cout<<endl;
    }
}
