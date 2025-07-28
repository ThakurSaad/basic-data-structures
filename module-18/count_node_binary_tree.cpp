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

int count_node(Node *root)
{
    int count = 0;

    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return count;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        count++;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return count;
}

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
        // 1. ber kor
        Node *p = q.front();
        q.pop();

        // 2. oi node er kaj
        // a. create two node
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        // b. assign value
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        // c. give connection
        p->left = myLeft;
        p->right = myRight;

        // 3. child push
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

int count_node_recursion(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_node_recursion(root->left);
    int r = count_node_recursion(root->right);
    return l + 1 + r;
}

int main()
{
    Node *root = input_tree();
    int cnt = count_node(root);
    int cnt_rec = count_node_recursion(root);
    cout << cnt << endl;
    cout << cnt_rec;
    return 0;
}