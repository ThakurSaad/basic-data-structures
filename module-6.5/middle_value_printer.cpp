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

int count_linked_list(Node *head)
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

void print_middle_elem(Node *head, int num_of_elem)
{
    int middle_elem = num_of_elem / 2;
    Node *tmp = head;

    for (int i = 0; i < middle_elem - 1; i++)
    {
        tmp = tmp->next;
    }

    if (num_of_elem % 2 == 0)
    {
        cout << tmp->val << " " << tmp->next->val << endl;
    }
    else
    {
        cout << tmp->next->val << endl;
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

    int num_of_elem = count_linked_list(head);
    print_middle_elem(head, num_of_elem);

    return 0;
}