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

void insert_at_tail(Node *&head, int val)
{

    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = new_node;
}

void print_linked_list(Node *&head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    // Node *head = new Node(11);
    // Node *a = new Node(22);
    // Node *b = new Node(33);

    // head->next = a;
    // a->next = b;

    insert_at_tail(head, 99);
    insert_at_tail(head, 19);
    insert_at_tail(head, 91);
    insert_at_tail(head, 990);
    print_linked_list(head);

    return 0;
}