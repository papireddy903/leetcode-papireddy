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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1==NULL){
            return list2;
        }

        if (list2==NULL){
            return list1;
        }

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* newHead = new ListNode(-1);
        ListNode* cur = newHead;

        while (temp1!=NULL and temp2!=NULL){
            if (temp1->val <= temp2->val){
                // ListNode* newnode = new ListNode(temp1->val);
                cur->next = temp1;
                temp1 = temp1->next;

            }
            else{
                // ListNode* newnode = new ListNode(temp2->val);
                cur->next = temp2;
                temp2 = temp2->next;
            }
            cur = cur->next;
            
        }


        if (temp1!=NULL){
            cur->next = temp1;
            cur = cur->next;
            temp1 = temp1->next;
        }
        while (temp2!=NULL){
            cur->next =temp2;
            cur = cur->next;
            temp2 = temp2->next;
        }

        return newHead->next;









        
    }
};