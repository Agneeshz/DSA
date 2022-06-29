#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

Node *ReverseDLL(Node *head)
{
    Node *t, *curr = head;
    if (head == NULL || head->next == NULL)
        return head;
    while (curr != NULL)
    {
        t = curr->prev;
        curr->prev = curr->next;
        curr->next = t;
        curr = curr->prev;
    }
    return t->prev;
}