#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

Node *insert(Node *root, int x)
{
    if (root == NULL)
        return new Node(x);
    else if (root->key > x)
        root->left = insert(root->left, x);
    else if (root->key < x)
        root->right = insert(root->right, x);
    return root;
}

int main()
{

    return 0;
}