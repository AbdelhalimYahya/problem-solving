class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* current = head;
        
        while (current != nullptr) {
            if (current->val == INT_MAX) {
                return true;  // Already visited
            }
            current->val = INT_MAX;  // Mark as visited
            current = current->next;
        }
        
        return false;
    }
};

// the link : https://leetcode.com/problems/linked-list-cycle/
