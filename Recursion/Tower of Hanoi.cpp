#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char A = 'A', char B = 'B', char C = 'C')
{
    if (n == 1)
    {
        cout << "Move 1 from " << A << " to " << C << endl;
        return;
    }
    TOH(n - 1, A, C, B);
    cout << "Move " << n << " from " << A << "to " << C << endl;
    TOH(n - 1, B, A, C);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    TOH(n);
    return 0;
}