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

void reverse_list(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}

void is_palindrome(Node *head, Node *newHead)
{
    for (Node *i = head, *j = newHead; i != NULL; i = i->next, j = j->next)
    {
        if (i->val != j->val)
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
    return;
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
            break;
        insert_at_tail(head, tail, val);
    }

    Node *newHead = NULL;
    Node *newTail = NULL;
    Node *tmp = head;

    while (tmp != NULL)
    {
        insert_at_tail(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }

    reverse_list(newHead, newTail);
    is_palindrome(head, newHead);

    return 0;
}