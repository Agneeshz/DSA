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

int searchLL(Node *head, int x)
{
    Node *curr = head;
    int pos = 1;
    while (curr != NULL)
    {
        if (curr->data == x)
            return pos;
        else
        curr = curr->next;
        pos++;
    }
    return -1;
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
    cout << searchLL(head, x);
    return 0;
}