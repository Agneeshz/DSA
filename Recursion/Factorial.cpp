#include <bits/stdc++.h>
using namespace std;

int factorial(int n, int prod)
{
    if (n == 1 || n == 0)
    {
        cout << prod;
        return prod;
    }
    prod *= n;
    n -= 1;
    factorial(n, prod);
    return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x;
    cin >> x;
    factorial(x, 1);
    return 0;
}