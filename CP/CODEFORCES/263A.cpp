#include <bits/stdc++.h>

using namespace std;
int check = 0;
void row_switch(vector<vector<int>> v);
void column_switch(vector<vector<int>> v);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<vector<int>> v;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int t1, t2;
            cin >> v[i][j];
            if (v[i][j] == 1)
            {
                t1 = i;
                t2 = j;
            }
        }
    }
    return 0;
}
void row_switch(vector<vector<int>> v)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int t;
            if (check==0)
            {
                t = v[i][j];
                v[i][j] = v[i + 1][j];
                v[i + 1][j] = t;
            }
            else
            {
                t = v[i+1][j];
                v[i+1][j] = v[i][j];
                v[i][j] = t;
            }
    }
}
void column_switch(vector<vector<int>> v)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int t;
            if(check==0)
            {
                t = v[i][j];
                v[i][j] = v[i][j + 1];
                v[i][j + 1] = t;
            }
            else
            {
                t = v[i][j+1];
                v[i][j+1] = v[i][j];
                v[i][j] = t;
            }
        }
    }
}