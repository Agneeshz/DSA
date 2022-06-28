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

// Node *InsertBegin(Node *head, int x)
// {
//     if (head == NULL)
//     {
//         head = new Node(x);
//         head->next = head;
//         return head;
//     }
//     Node *curr = head;
//     Node *temp = new Node(x);
//     while (curr->next != head)
//         curr = curr->next;
//     curr->next = temp;
//     temp->next = head;
//     return temp;
// }

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}