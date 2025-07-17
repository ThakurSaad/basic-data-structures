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

void print(Node *head)
{
    cout << "L -> ";
    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->val << " ";
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    head->prev = new_node;
    new_node->next = head;
    head = new_node;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_any(Node *head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next->prev = newNode;

    newNode->prev = tmp;
    tmp->next = newNode;
}

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

int main()
{
    int q;
    Node *head = NULL;
    Node *tail = NULL;
    cin >> q;

    while (q--)
    {
        int x,
            v;

        cin >> x >> v;
        int sz = size(head);

        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print(head);
            print_backward(tail);
        }
        else if (x <= sz)
        {
            if (x == sz)
            {
                insert_at_tail(head, tail, v);
                print(head);
                print_backward(tail);
            }
            else
            {
                insert_at_any(head, x, v);
                print(head);
                print_backward(tail);
            }
        }
        else if (x > (sz - 1))
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}