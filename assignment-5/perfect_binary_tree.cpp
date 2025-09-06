#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

int find_depth(Node *root)
{
    int d = 0;
    while (root)
    {
        d++;
        root = root->left;
    }
    return d;
}

bool perfect_binary_tree(Node *root, int depth, int level)
{
    if (!root)
        return true;

    if (!root->left && !root->right)
        return depth == level;

    if (!root->left || !root->right)
        return false;

    bool l = perfect_binary_tree(root->left, depth, level + 1);
    bool r = perfect_binary_tree(root->right, depth, level + 1);

    return l && r;
}

int main()
{
    Node *root = input_tree();

    int depth = find_depth(root);

    int level = 1;

    bool isPerfectBinary = perfect_binary_tree(root, depth, level);

    cout << (isPerfectBinary ? "YES" : "NO");

    return 0;
}