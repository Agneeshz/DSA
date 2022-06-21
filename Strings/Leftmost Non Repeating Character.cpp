#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;
int leftMost(string &str)
{
    int visited[CHAR]={0};
    int res = -1;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        visited[str[i]]++;
        if (visited[str[i]] == 1)
            res = i;
    }
    return res;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin>>s;
    cout<<leftMost(s);
    return 0;
}