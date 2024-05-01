class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* temp = head;

        while(temp != NULL) {
            temp = temp->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;

    }
};