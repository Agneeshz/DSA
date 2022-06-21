#include <bits/stdc++.h>
using namespace std;

void PatSearching(string &txt, string &pat)
{
    int m = pat.length();
    int n = txt.length();
    for (int i = 0; i < n - m;)
    {
        int j;
        for (j = 0; j < m; j++)
            if (pat[j] != txt[i + j])
                break;
        if (j == 0)
            i++;
        if (j == m)
            cout << i << " ";
        else
            i += j;
    }
}

int main()
{

    return 0;
}