/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *newHead = new ListNode();
        ListNode *current = newHead;
        int carry = 0, rem;
        long long cursum = 0;

        while (l1!=NULL or l2!=NULL or carry!=0){
            cursum += (l1!=NULL)? l1->val:0;
            cursum += (l2!=NULL)? l2->val:0;
            cursum += carry;
            carry = cursum / 10;
            rem = cursum % 10;

            current->next = new ListNode(rem);
            current = current->next;


            if (l1!=NULL) l1 = l1->next;
            if (l2!=NULL) l2 = l2->next;
            cursum = 0;
        }

        return newHead->next;
        
    }
};