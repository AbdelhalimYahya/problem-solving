class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to simplify edge cases
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        
        // Traverse both lists
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        
        // If one list is exhausted, attach the remaining part of the other list
        if (list1 != nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }
        
        // The merged list starts from dummy->next
        ListNode* result = dummy->next;
        delete dummy; // Clean up the dummy node
        return result;
    }
};

// the link : https://leetcode.com/problems/merge-two-sorted-lists/
