#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_forward(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->val << " ";
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    for (Node *i = tail; i != NULL; i = i->prev)
    {
        cout << i->val << " ";
    }
    cout << endl;
}

void insert_at_head(Node *&head, int val)
{
    Node *new_node = new Node(val);
    head->prev = new_node;
    new_node->next = head;
    head = new_node;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;

    a->prev = head;
    a->next = tail;

    tail->prev = a;

    insert_at_head(head, 100);
    insert_at_head(head, 111);
    print_forward(head);
    print_backward(tail);
    return 0;
}