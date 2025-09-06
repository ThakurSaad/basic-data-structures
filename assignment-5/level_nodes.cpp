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

int mx_dep;
int sum = 0;

int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

void level_order(Node *root, int l)
{
    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return;
    }

    bool flag = false;

    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> f = q.front();
        q.pop();

        Node *node = f.first;
        int level = f.second;

        if (level == l)
        {
            cout << node->val << " ";
            flag = true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    if (!flag)
        cout << "Invalid";
}

int main()
{
    Node *root = input_tree();

    int l;
    cin >> l;

    level_order(root, l);

    return 0;
}
