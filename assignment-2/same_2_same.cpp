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

int size(Node *head)
{
    int counter = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        counter++;
    }
    return counter;
}

void compare(Node *head, Node *head_2)
{
    int size_of_1 = size(head);
    int size_of_2 = size(head_2);

    if (size_of_1 != size_of_2)
    {
        cout << "NO";
        return;
    }

    for (Node *i = head, *j = head_2; i != NULL; i = i->next, j = j->next)
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

    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }

        insert_at_tail(head_2, tail_2, val);
    }

    compare(head, head_2);

    return 0;
}