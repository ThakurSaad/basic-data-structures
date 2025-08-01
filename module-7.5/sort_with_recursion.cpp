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

void print_linked_list(Node *tmp)
{
    if (tmp == NULL)
    {
        return;
    }

    cout << tmp->val << " ";
    print_linked_list(tmp->next);
}

void sort_descending_order(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
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

    sort_descending_order(head);
    print_linked_list(head);

    return 0;
}