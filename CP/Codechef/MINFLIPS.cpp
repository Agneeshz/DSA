#include <bits/stdc++.h>
using namespace std;
// int sum(int a[], int n)
// {
//     int sum;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" array";
//         sum = 0;
//         sum += a[i];
//     }
//     cout<<sum<<" ok"<<endl;
//     return sum;
// }
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int arr[1000], n, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (n % 2 != 0)
            cout << -1 << endl;
    //     cout<<sum(arr, n)<<endl;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (sum(arr, n) == 0)
    //             break;
    //         else
    //         {
    //             arr[i] = arr[i] * -1;
    //             count++;
    //            // cout<<sum(arr, n)<<endl;
    //         }
    //     }
    //     // cout << count << endl;
        else
        {
            int ans,count1=0,count2=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==1)
                    count1++;
                else if(arr[i]==-1)
                    count2++;
            }
            ans=abs(count1-count2)/2;
            cout<<ans<<endl;
        }
    }
    return 0;
}