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

void print_min_max_diff(Node *head)
{
    int max = head->val;
    int min = head->val;

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i; j != NULL; j = j->next)
        {
            if (max < j->val)
            {
                max = j->val;
            }
            if (min > j->val)
            {
                min = j->val;
            }
        }
    }

    cout << max - min;
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