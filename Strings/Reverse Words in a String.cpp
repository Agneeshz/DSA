#include <bits/stdc++.h>
using namespace std;


void ReverseWords(char str[], int n)
{
    int start = 0;
    for (int end = 0; end < n; end++)
    {
        if (str[end] == ' ')
        {
            reverse(str, start, end++);
            start = end + 1;
        }
    }
    reverse(str, start, n - 1);
    reverse(str, 0, n - 1);
    cout << str;
}

void reverse(char str[], int low, int high)
{
    while (low <= high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char s[]="geeks for geeks";
    int n=sizeof(s)/sizeof(0);
    ReverseWords(s, n);
    return 0;
}