#include <bits/stdc++.h>
using namespace std;
struct MyHash
{
    int BUCKET;
    list<int> *table;
    MyHash(int b)
    {
        BUCKET = b;
        table = new list<int>[b];
    }
    void insert(int Key)
    {
        int i = Key % BUCKET;
        table[i].push_back(Key);
    }
    void remove(int Key)
    {
        int i = Key % BUCKET;
        table[i].remove(Key);
    }
    bool search(int Key)
    {
        int i = Key%BUCKET;
        for(auto x : table[i])
            if(x == Key)
                return true;
        return false;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    return 0;
}