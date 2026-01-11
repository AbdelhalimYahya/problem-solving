class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        
        while (curr != nullptr) {
            // Store next node
            next = curr->next;
            // Reverse the link
            curr->next = prev;
            // Move pointers one position ahead
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};

// the link : https://leetcode.com/problems/reverse-linked-list/
