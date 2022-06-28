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

void Traversal(Node *head)
{
    Node *curr = head;
    if(head==NULL)
        return;
    do
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }while (curr != head);
    // cout << (curr->data);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = head;
    Traversal(head);
    return 0;
}