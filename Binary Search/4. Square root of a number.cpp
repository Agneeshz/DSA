#include <bits/stdc++.h>
using namespace std;

// Function to find square root
// x: element to find square root
class Solution
{
public:
    long long int floorSqrt(long long int x)
    {
        long long int low = 0, high = x, ans = 0;
        while (low <= high)
        {
            long long int mid = (low + high) / 2;
            long long int midSquare = mid * mid;
            if (midSquare == x)
            {
                return mid;
            }
            else if (midSquare > x)
            {
                high = mid - 1;
            }
            else if (midSquare < x)
            {
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long int x;
    Solution s;
    cin >> x;
    cout << s.floorSqrt(x);
    return 0;
}