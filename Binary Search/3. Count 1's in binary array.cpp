#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to count number of Ones
    // arr: input array
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        int low = 0, high = N - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2, count = 0;
            if (arr[mid] == 1)
            {
                count = mid + 1;
                low = mid + 1;
                if (arr[mid] == 0)
                    return count;
            }
            else
                high = mid - 1;
        }
    }
};

int main()
{

    return 0;
}