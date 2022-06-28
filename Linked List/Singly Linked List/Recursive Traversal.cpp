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

void PrintList(Node *head)
{
    if (head == NULL)
        return;
    cout << (head->data) << " ";
    PrintList(head->next);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Node *head = new Node(10);
    head->next = new Node(20);
    PrintList(head);
    return 0;
}