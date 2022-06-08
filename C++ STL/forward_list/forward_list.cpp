#include <bits/stdc++.h>
#include<forward_list>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    forward_list<int>l={10,15,20};
    // l.push_front(5);
    // l.push_front(3);
    // l.pop_front();    basic
    // for(int x:l)
    //     cout<<x<<" ";

    l.assign({10,20,30,10});
    
    l.assign(5,10);
    
    l.remove(10);
    forward_list<int>l2;
    l2.assign(l.begin(),l.end());
    for(auto it=l.begin();it!=l.end();it++)
        cout<<(*it)<<" ";
    return 0;
}