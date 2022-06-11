#include <bits/stdc++.h>
using namespace std;

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>pairs;
        long long int n,m;
        n=spells.size();
        m=potions.size();
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<m;j++)
            {
                int product;
                product = spells[i]*potions[j];
                if(product >= success)
                    count++;
            }
            pairs.push_back(count);
        }
    for(auto x : pairs)
                cout<<x<<" ";
    return pairs;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int>spells; vector<int>potions; long long success;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        spells.push_back(input);
    }
    for(int i=0;i<m;i++)
    {
        int input;
        cin>>input;
        potions.push_back(input);
    }
    cin>>success;
    successfulPairs(spells,potions,success);
    // vector<int>pairs;
    //     for(int i=0;i<n;i++)
    //     {
    //         int count=0;
    //         for(int j=0;j<m;j++)
    //         {
    //             int product;
    //             product = spells[i]*potions[j];
    //             if(product >= success)
    //                 count++;
    //         }
    //         pairs.push_back(count);
    //     }
    // for(auto x : pairs)
    //             cout<<x<<" ";
    // return 0;
}