#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_list(Node *head)
{
    Node *tmp = head;

    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
    new_node->prev = tail;
    tail = new_node;
}

int size(Node *head)
{
    int val = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        val++;
    }
    return val;
}

void compare(Node *head, Node *head2)
{
    for (Node *i = head, *j = head2; i != NULL; i = i->next, j = j->next)
    {
        if (i->val != j->val)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *prev = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail(head, tail, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    Node *prev2 = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail(head2, tail2, val);
    }

    if (size(head) == size(head2))
        compare(head, head2);
    else
        cout << "NO";

    return 0;
}