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

Node *floor(Node *root, int x)
{
    // Node *parent;
    // while (root != NULL)
    // {
    //     parent = root;
    //     if (root->key == x)
    //         return parent;
    //     else if (root->key < x)
    //         floor(root->right, x);
    //     else
    //         floor(root->left, x);
    // }
    // return parent;
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key == x)
            return root;
        else if (root->key > x)
            root = root->left;
        else
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    Node *root = new Node(50);
    root->left = new Node(30);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right = new Node(70);
    root->right->right = new Node(80);
    root->right->left = new Node(60);
    root->right->left->left = new Node(55);
    root->right->left->right = new Node(65);
    cout << (floor(root, 58)->key) << "\n";
    cout << (floor(root, 35)->key);
    cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}