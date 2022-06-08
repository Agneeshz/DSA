#include<iostream>
using namespace std;
int main()
{
    int a[50],n,k,count=0,check=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=0)
            check=1;
    }
    if(check==1)
    {for(int j=0;j<n;j++)
    {
        if(a[j]>=a[k-1]&&a[j]>0)
            count++;
    }
    }
    cout<<count;
}
