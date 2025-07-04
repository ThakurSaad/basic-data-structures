#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
}

void find_idx(Node *&head, int x)
{
    int idx = 0;
    int flag = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val == x)
        {
            cout << idx << endl;
            flag = 1;
            break;
        }
        idx++;
    }

    if (flag)
    {
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;

            if (val == -1)
            {
                break;
            }

            insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;

        find_idx(head, x);
    }

    return 0;
}