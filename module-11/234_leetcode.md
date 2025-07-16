```
class Solution {
public:
    void insert_at_tail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* newNode = new ListNode(val);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void reverse(ListNode*& head, ListNode*& tail, ListNode* tmp) {
        if (head == NULL)
            return;

        if (tmp->next == NULL) {
            head = tmp;
            return;
        }

        reverse(head, tail, tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
        tail = tmp;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        ListNode* tmp = head;

        while (tmp != NULL) {
            insert_at_tail(newHead, newTail, tmp->val);
            tmp = tmp->next;
        }

        reverse(newHead, newTail, newHead);

        ListNode* i = head;
        ListNode* j = newHead;
        while (i != NULL) {
            if (i->val != j->val) {
                return false;
            }
            i = i->next;
            j = j->next;
        }

        return true;
    }
};
```
