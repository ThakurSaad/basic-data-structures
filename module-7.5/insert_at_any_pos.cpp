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

int count_elem_linked_list(Node *head)
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

void insert_at_idx(Node *&head, int idx, int val)
{
    int num_of_elem = count_elem_linked_list(head);

    if (num_of_elem < idx)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *new_node = new Node(val);
    Node *tmp = head;

    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }

    new_node->next = tmp->next;
    tmp->next = new_node;
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

    int q;
    cin >> q;

    while (q--)
    {
        int idx,
            val;
        cin >> idx >> val;

        insert_at_idx(head, idx, val);
        print_linked_list(head);
        cout << endl;
    }

    return 0;
}