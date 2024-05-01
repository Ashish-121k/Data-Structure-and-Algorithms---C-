Approach 1 :
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        map<ListNode*, bool>table;
        while(temp != NULL){
            if(table[temp] == false) {
                table[temp] = true;
            }
            else
            {
                return true;
            }
            temp = temp->next;    //**temp ko aage badhana bhul jaata hu**
        }
        return false;
    }
};


class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        if(head == NULL ){
            return false;
        }

        while(fast->next != NULL){
            fast = fast->next;
            if(fast->next != NULL){
                fast = fast->next;
                slow = slow->next;
            }
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};

