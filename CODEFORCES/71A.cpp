#include <stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n+1;i++)
    {char a[100];
    gets_s(a,4);
    if(strlen(a)>10)
    {
        cout<<a[0];
        cout<<strlen(a)-2;
        cout<<a[strlen(a)-1]<<endl;
    }
    else
        puts(a);
    }
}
