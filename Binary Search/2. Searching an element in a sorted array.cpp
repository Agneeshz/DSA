#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    {
        int low = 0, high = N - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == K)
            return 1;
        else if (arr[mid] > K)
            high = mid - 1;
        else if (arr[mid] < K)
            low = mid + 1;
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