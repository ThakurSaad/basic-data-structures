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

int max_val(Node *head)
{
    int mx = INT_MIN;
    Node *tmp = head;

    while (tmp != NULL)
    {
        mx = max(tmp->val, mx);
        tmp = tmp->next;
    }

    return mx;
}

int min_val(Node *head)
{
    int mn = INT_MAX;
    Node *tmp = head;

    while (tmp != NULL)
    {
        mn = min(tmp->val, mn);
        tmp = tmp->next;
    }

    return mn;
}

void print_min_max_diff(Node *head)
{
    int mx = max_val(head);
    int mn = min_val(head);
    cout << mx - mn;
}

int main()
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

    print_min_max_diff(head);

    return 0;
}