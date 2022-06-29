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

Node *DeleteKKth(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    if (k == 1)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    for (int i = 1; i < k - 1; i++)
        curr = curr->next;
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}