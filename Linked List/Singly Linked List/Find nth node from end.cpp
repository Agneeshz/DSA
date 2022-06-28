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

void findNthLast(Node *head, int n)
{
    Node *first = head, *second = head;
    if (head == NULL)
        return;
    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
            return;
        first = first->next;
    }
    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    cout << (second->data);
}

int main()
{
    Node *head = NULL;
    return 0;
}