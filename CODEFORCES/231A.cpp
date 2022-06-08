#include<iostream>
using namespace std;
int main()
{
    int n,a[3],count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x=0;
    for(int j=0;j<3;j++)
    {
        cin>>a[j];
        x+=a[j];
    }
    if(x>=2)
            count++;
    }
    cout<<count;
}
