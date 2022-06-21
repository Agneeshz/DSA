#include <bits/stdc++.h>
using namespace std;

// const int CHAR = 256;
// int leftMost(string &s)
// {
//     int count[CHAR]={0};
//     for(int i=0;i<s.length();i++)
//         count[s[i]]++;
//     for(int i=0;i<s.length();i++)
//         if(count[s[i]]>1)
//             return i;
//     return -1;
// }        better approach

// const int CHAR = 256;
// int leftMost(string &str)
// {
//     int fIndex[CHAR];
//     fill(fIndex,fIndex+CHAR,-1);
//     int res=INT_MAX;
//     for(int i=0;i<str.length();i++)
//     {
//         int fi=fIndex[str[i]];
//         if(fi==-1)
//             fIndex[str[i]]=i;
//         else
//             res=min(res,fi);
//     }
//     return(res==INT_MAX)?-1:res;
// }            Efiicient method 1

const int CHAR = 256;
int leftMost(string &str)
{
    bool visited[CHAR];
    fill(visited, visited + CHAR, false);
    int res = -1;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (visited[str[i]])
            res = i;
        else
            visited[str[i]] == true;
    }
    return res;
}

int main()
{

    return 0;
}