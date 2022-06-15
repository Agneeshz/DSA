#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str, int start, int end)
{
    if(start>=end)
        return true;
    return(str[start]==str[end]&&isPalindrome(str,start+1,end-1));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // string str="aba";
    // int n=str.length;
    // isPalindrome(str,0,);
    return 0;
}