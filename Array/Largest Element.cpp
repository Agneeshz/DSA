#include <bits/stdc++.h>
using namespace std;

int getLargest(int arr[], int n)
{
    int res = 0;
    for(int i=1;i<n;i++)
        if(arr[i]>arr[res])
            res = i;
    return res;
}

int main()
{

    return 0;
}