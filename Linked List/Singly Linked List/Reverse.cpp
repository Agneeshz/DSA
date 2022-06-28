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

Node *Reverse(Node *head)
{
    Node *prev = NULL, *curr = head, *next;
    if (head == NULL)
        return head;
    if (head->next == NULL)
        return head;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}