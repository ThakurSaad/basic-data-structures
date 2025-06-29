#include <iostream>

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = nullptr; // Initially empty list

    if (head == nullptr)
    {
        std::cout << "List is empty.\n";
    }
    else
    {
        std::cout << "List is not empty.\n";
    }

    return 0;
}
