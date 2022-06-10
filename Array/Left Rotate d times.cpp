#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, const int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];
    for (int i = 0; i < d; i++)
        arr[i - d] = arr[i];
    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
}

int main()
{

    return 0;
}