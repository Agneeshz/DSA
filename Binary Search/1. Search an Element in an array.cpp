#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int N, int X)
{
    int low = 0, high = N - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == X)
            return mid;
        else if (arr[mid] > X)
            high = mid - 1;
        else if (arr[mid] < X)
            low = mid + 1;
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a[10], N, X;
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>a[i];
    cin>>X;
    cout<<search(a,N,X);
    return 0;
}