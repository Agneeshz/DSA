#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    string str ="geeksforgeeks";
    int count[26]={0};
    map<char,int>m;
    for(int i=0;i<str.length();i++){
        m[str[i]]++;

    }

    for(auto &a: m){
        cout<<a.first<<" "<<a.second<<endl;
    }
    string s="";
    for(auto &a: m){
        while(a.second--){
            s+=a.first;
        }
    }
    cout<<s<<endl;

        
    // for(int i=0;i<26;i++)
    //     if(count[i]>0)
    //         cout<<(char)(i+'a')<<" "<<count[i]<<endl;
    return 0;
}