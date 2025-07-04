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

int size(Node *head)
{
    Node *tmp = head;
    int counter = 0;

    while (tmp != NULL)
    {
        counter++;
        tmp = tmp->next;
    }

    return counter;
}

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *new_node = new Node(v);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head = new_node;
}

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

void print_linked_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void delete_at_any_pos(Node *&head, int idx)
{
    Node *tmp = head;

    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    delete delete_node;
};

void delete_at_head(Node *&head)
{
    if (head == NULL)
        return;

    Node *delete_node = head;
    head = head->next;
    delete delete_node;
};

void delete_at_tail(Node *&head, Node *&tail, int idx)
{

    Node *tmp = head;

    for (int i = 0; i < idx - 1; i++)
        tmp = tmp->next;

    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    tail = tmp;
    delete delete_node;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        int sz = size(head);

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            if (v == 0)
            {
                delete_at_head(head);
            }
            else if (v == (sz - 1))
            {
                delete_at_tail(head, tail, v);
            }
            else if (v <= (sz - 1))
            {
                delete_at_any_pos(head, v);
            }
        }

        print_linked_list(head);
        cout << endl;
    }

    return 0;
}