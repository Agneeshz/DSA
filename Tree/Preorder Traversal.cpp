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

void inorder(Node *root)
{
    if (root != NULL)
    {
        cout << (root->key) << " ";
        inorder(root->left);
        inorder(root->right);
    }
}

int main()
{

    return 0;
}