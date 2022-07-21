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

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    else if (root->key == x)
        return true;
    else if (root->key > x)
        return search(root->left, x);
    else
        return search(root->right, x);
}

int main()
{

    return 0;
}