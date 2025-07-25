class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* result = new ListNode(0);
        ListNode* curr = result;
        while(l1 || l2 || carry){
            int d1 = l1 ? l1->val : 0;
            int d2 = l2 ? l2->val : 0;
            int sum = d1 + d2 + carry;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            carry = sum/10;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return result->next;
    }
};