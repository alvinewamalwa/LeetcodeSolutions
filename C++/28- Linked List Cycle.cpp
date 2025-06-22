class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast) {
            if(fast == slow) return true;
            if(!fast->next) return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
    }
};