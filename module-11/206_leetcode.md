```
class Solution {
public:
    void reverse(ListNode*& head, ListNode* tmp) {
        if (head == NULL)
            return;

        if (tmp->next == NULL) {
            head = tmp;
            return;
        }

        reverse(head, tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
    }

    ListNode* reverseList(ListNode* head) {
        reverse(head, head);
        return head;
    }
};
```
