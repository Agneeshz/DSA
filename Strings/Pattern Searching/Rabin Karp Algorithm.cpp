#include <bits/stdc++.h>
using namespace std;

void RBSearch(string &pat, string &txt, int m, int n)
{
    // Compute (d ^ m-1 % q)
    int h = 1;
    int d = 26, q = 7907; 
    for (int i = 1; i < m; i++)
        h = (h * d) % q;
    // Compute p and t0
    int p = 0, t = 0;
    for (int i = 0; i < m; i++)
    {
        p = (p * d + pat[i] % q);
        t = (t * d + txt[i] % q);
    }
    for (int i = 0; i <= n - m; i++)
    {
        // Check for Spurious hit
        if (p == t)
        {
            bool flag = true;
            for (int j = 0; j < m; j++)
                if (txt[i + j] != pat[j])
                {
                    flag = true;
                    break;
                }
            if (flag == true)
                cout << i << " ";
        }
        if (i < n - m)
        {
            t = (d * (t - txt[i] * h) + txt[i + m]) % q;
            if (t < 0)
                t += q;
        }
    }
}

int main()
{

    return 0;
}