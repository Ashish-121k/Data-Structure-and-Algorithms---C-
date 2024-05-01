class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;

        // Step 1: Duplicate the linked list
        ListNode* duplicate = duplicateList(head);

        // Step 2: Reverse the duplicate list
        ListNode* reversedDuplicate = reverseList(duplicate);

        // Step 3: Compare the original and reversed duplicate lists
        while (head != nullptr && reversedDuplicate != nullptr) {
            if (head->val != reversedDuplicate->val)
                return false;
            head = head->next;
            reversedDuplicate = reversedDuplicate->next;
        }

        // Clean up dynamically allocated memory
        deleteList(duplicate);
        deleteList(reversedDuplicate);

        return true;
    }

    // Function to duplicate the linked list
    ListNode* duplicateList(ListNode* head) {
        ListNode* dummy = new ListNode(NULL);
        ListNode* temp = dummy;

        while (head != nullptr) {
            ListNode* newNode = new ListNode(head->val);
            temp->next = newNode;
            temp = temp->next;
            head = head->next;
        }

        return dummy->next;
    }

    // Function to reverse the linked list
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    // Function to delete the linked list
    void deleteList(ListNode* head) {
        while (head != nullptr) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
    }
};