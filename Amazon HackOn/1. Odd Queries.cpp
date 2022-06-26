
//  C++ program to get updated array after many array range
// add operation
#include <bits/stdc++.h>
using namespace std;

//  Utility method to add value val, to range [lo, hi]
void add(vector<int> arr, int N, int lo, int hi, int val)
{
    arr[lo] += val;
    if (hi != N - 1)
        arr[hi + 1] -= val;
}

//  Utility method to get actual array from operation array
void updateArray(vector<int> arr, int N)
{
    //  convert array into prefix sum array
    for (int i = 1; i < N; i++)
        arr[i] += arr[i - 1];
}

//  method to print final updated array
void printArr(vector<int> arr, int N)
{
    updateArray(arr, N);
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}

vector<int> solve(int N, int Q, vector<int> Arr, vector<vector<int>> queries)
{
    vector<int> ans;
    vector<int> c;
    for (int i = 0; i < Q; i++)
    {
        if (queries[i][0] == 1)
        {
            int i, v;
            i = queries[i][1];
            v = queries[i][2];
            Arr[i - 1] == v;
        }
        else if (queries[i][0] == 2)
        {

            int count = 0;
            int l, r;
            l = queries[i][1];
            r = queries[i][2];

            for (int i = l - 1; i < r; i++)
            {
                for (int j = l - 1; j < r; j++)
                {
                    if (Arr[i] != Arr[j])
                    {
                        count++;
                    }
                }
                cout << count << " ";
                int temp;
                temp = count;
                c.push_back(temp);
            }
            int min;
            min = *min_element(c.begin(), c.end());
            ans.push_back(min);
        }
    }
    // return ans;
}
//  Driver code
// int main()
// {
//     int N = 6;
//     vector<int>v(N,0);

//     //  Range add Queries
//     add(v, N, 0, 2, 100);
//     add(v, N, 1, 5, 100);
//     add(v, N, 2, 3, 100);

//     printArr(v, N);
//     return 0;
// }

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int Q;
        cin >> Q;
        vector<int> Arr(N);
        for (int i_Arr = 0; i_Arr < N; i_Arr++)
            cin >> Arr[i_Arr];
        vector<vector<int>> queries(Q, vector<int>(3));
        for (int i_queries = 0; i_queries < Q; i_queries++)
            for (int j_queries = 0; j_queries < 3; j_queries++)
                cin >> queries[i_queries][j_queries];
        vector<int> out_;
        out_ = solve(N, Q, Arr, queries);
        cout << out_[0];
        for (int i_out_ = 1; i_out_ < out_.size(); i_out_++)
            cout << " " << out_[i_out_];
        cout << "\n";
    }
}