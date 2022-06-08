#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step; ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
int main()
{
      #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    while(t--)
    {
        int a[10],b[10],n,m,i=0,j=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        for(j=0;j<m;j++)
            cin>>b[j];
        bubbleSort(a,n);
        bubbleSort(b,m);
        i=0;j=0;
        while(i<n)
        {
            if(a[i]<b[j])
                i++;
            else
                j++;
        }
        //cout<<i<<endl<<j<<endl<<a[i]<<endl<<b[j]<<endl;
        if(a[i-1]>b[j-1])
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
        i=0;j=0;
        while(j<m)
        {
            if(b[j]<a[i])
                j++;
            else
                i++;
        }
        //cout<<i<<endl<<j<<endl<<a[i]<<endl<<b[j]<<endl;
        if(a[i-1]>b[j-1])
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
    }
    return 0;
}