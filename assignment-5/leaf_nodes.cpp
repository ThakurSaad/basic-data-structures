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

vector<int> leaf_nodes_desc(Node *root, vector<int> &v)
{
    if (root == NULL)
        return v;

    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }

    leaf_nodes_desc(root->left, v);
    leaf_nodes_desc(root->right, v);

    return v;
}

int main()
{
    Node *root = input_tree();
    vector<int> v;

    v = leaf_nodes_desc(root, v);

    sort(v.begin(), v.end(), greater<>());

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}