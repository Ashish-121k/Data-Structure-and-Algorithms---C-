class Solution {
public:
    ListNode *detectCycle(ListNode *head){
            ListNode* slow = head;
            ListNode* fast = head;
            if(fast == NULL || fast->next == NULL){
            return NULL;
        }
            while(fast != NULL){
                fast = fast->next;
                    if(fast != NULL){
                        fast = fast->next;
                        slow = slow->next;
                    }
                    if(slow == fast){
                        slow = head;
                        while(fast != slow ){
                            slow = slow->next;
                            fast = fast->next;         
                        }    
                        return slow;
                    }  
            }
            return NULL;
            
    }        
};