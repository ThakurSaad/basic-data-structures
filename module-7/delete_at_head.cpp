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
};

void print_reverse_linked_list(Node *tmp)
{
    if (tmp == NULL)
    {
        return;
    }
    cout << tmp->val << endl;
    print_reverse_linked_list(tmp->next);
}

void delete_at_head(Node *&head)
{
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
};

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

    delete_at_head(head);
    delete_at_head(head);
    print_reverse_linked_list(head);

    return 0;
}