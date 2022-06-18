#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>a;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            a.push_back(nums[i]+s);
            s+=nums[i];
            // cout<<s<<" ";
        }
        for(auto x:a)
            cout<<x<<" ";
        return a;
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    Solution s;
    vector<int>b;
    int x;
    for(int i=0;i<4;i++)
        {cin>>x;
        b.push_back(x);}
    s.runningSum(b);
    return 0;
}