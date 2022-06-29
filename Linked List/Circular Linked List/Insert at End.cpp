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

Node *InsertEnd(Node *head, int x)
// {
//     Node *temp = new Node(x);
//     Node *curr = head->next;
//     if (head == NULL)
//     {
//         temp->next = temp;
//         return temp;
//     }
//     while (curr->next != head)
//         curr = curr->next;
//     curr->next = temp;
//     temp->next = head;
//     return head;
// }
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    int t = temp->data;
    temp->data = head->data;
    head->data = t;
    return temp;
}