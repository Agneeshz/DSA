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
    while (root != NULL)
    {
        if (root->key == x)
            return true;
        else if (root->key < x)
            root = root->right;
        else
            root = root->left;
    }
}

int main()
{

    return 0;
}