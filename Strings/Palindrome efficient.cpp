#include <bits/stdc++.h>
using namespace std;

bool isPal(string &str)
{
    int begin=0, end= str.length()-1;
    while(begin<end)
    {
        if(str[begin]!=str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cout<<isPal(s);
    return 0;
}