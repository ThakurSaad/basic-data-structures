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
        // ber
        Node *f = q.front();
        q.pop();

        // kaj
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

        // connection
        f->left = myLeft;
        f->right = myRight;

        // children push
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return root;
};

int level_order_count(Node *root)
{
    if (!root)
    {
        cout << "No tree" << endl;
        return 0;
    }

    int cnt = 0;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cnt++;

        if (f->left)

            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
    return cnt;
}

int inorder_count(Node *root)
{
    if (root == NULL)
        return 0;
    int l = inorder_count(root->left);
    int r = inorder_count(root->right);

    return l + r + 1;
}

int main()
{
    Node *root = input_tree();
    int count = level_order_count(root);
    int count2 = inorder_count(root);
    cout << count << endl
         << count2;

    return 0;
}