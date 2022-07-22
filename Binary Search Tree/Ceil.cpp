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

Node *ceil(Node *root, int x)
{
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key == x)
            return root;
        else if (root->key < x)
            root = root->right;
        else
        {
            res = root;
            root = root->left;
        }
    }
    return res;
}

int main()
{

    return 0;
}