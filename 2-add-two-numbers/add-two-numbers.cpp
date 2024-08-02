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
        int carry = 0;
        
        ListNode* temp1 = l1, *temp2 = l2;
        ListNode* newHead = new ListNode(-1);
        ListNode* temp3 = newHead;

        while (temp1!=NULL or temp2!=NULL or carry!=0){
            int summ = carry;
            if (temp1){
                summ += temp1->val;
                temp1 = temp1->next;
            }
            if (temp2){
                summ += temp2->val;
                temp2 = temp2->next;
            }


            carry = summ / 10;
            int dig = summ % 10;
            ListNode* newnode = new ListNode(dig);
            temp3->next = newnode;
            temp3 = newnode;
               

        }
        return newHead->next;

        
    }
};