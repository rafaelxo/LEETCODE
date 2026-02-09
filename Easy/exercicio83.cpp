class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        while (curr != NULL && curr->next != NULL) {
            if (curr->val == curr->next->val) {
                ListNode* tmp = curr->next;
                curr->next = tmp->next;
                delete tmp;
            } else curr = curr->next;
        }
        return head;
    }
};
