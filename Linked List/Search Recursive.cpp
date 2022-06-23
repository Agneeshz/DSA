#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int Rsearch(Node *head, int x)
{
    if (head == NULL)
        return -1;

    else if (head->data == x)
    {
        return 1;
    }
    else
    {
        int res = Rsearch(head->next, x);
        if (res == -1)
            return -1;
        else
            return (res + 1);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x;
    cin >> x;
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    cout << Rsearch(head, x);
    return 0;
}