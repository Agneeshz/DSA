#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {

        sort(a, a + size);
        int count = 1;
        int temp;
        int N = size / 2;
        for (int i = 0; i < size; i++)
        {
            if (a[i] == a[i + 1])
            {
                count++;
            }
            else
                count = 1;
            if (count > N)
            {
                temp = a[i];
                return temp;
            }
        }
        return -1;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}