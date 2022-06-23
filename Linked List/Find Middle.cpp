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

void printMiddle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL || fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    cout<<(slow->data);
}

int main()
{

    return 0;
}