#include <bits/stdc++.h>

using namespace std;
vector<int>GetSmaller(int arr[],int n, int k)
{
   vector<int>res;
   for(int i=0;i<n;i++)
   {
      if(arr[i]<10)
         res.push_back(arr[i]);
   }
   return res;
}
int main()
{
   #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
   int arr[]={8,100,20,40,3,7};
   vector<int>res=GetSmaller(arr,6,10);
   for(int x:res)
      cout<<x<<" ";
}