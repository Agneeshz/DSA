#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void iterativePreorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> st;
    Node *curr = root;
    while (curr != NULL || st.empty() == false)
    {
        while (curr != NULL)
        {
            cout << (curr->key) << " ";
            if (curr->right != NULL)
                st.push(curr->right);
            curr = curr->left;
        }
        if (st.empty() == false)
        {
            curr = st.top();
            st.pop();
        }
    }
}