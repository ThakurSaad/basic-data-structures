https://leetcode.com/problems/middle-of-the-linked-list/

/\*\*

- Definition for singly-linked list.
- struct ListNode {
-     int val;
-     ListNode *next;
-     ListNode() : val(0), next(nullptr) {}
-     ListNode(int x) : val(x), next(nullptr) {}
-     ListNode(int x, ListNode *next) : val(x), next(next) {}
- };
  \*/

```
class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int count = 0;

        for (ListNode *i = tmp; i != NULL; i = i->next)
        {
            tmp = tmp->next;
            count++;
        }

        return count;
    }

    ListNode *middleNode(ListNode *head)
    {
        int sz = size(head);
        int middle = sz / 2;

        ListNode *tmp = head;
        int i = 1;
        while (i <= sz / 2)
        {
            tmp = tmp->next;
            i++;
        }

        return tmp;
    }
};
```
