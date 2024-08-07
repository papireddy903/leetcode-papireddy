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
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* nextP;
        while (cur!=NULL){
            nextP = cur->next;
            cur->next = prev;
            prev =cur;
            cur = nextP;
        }
        return prev;
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head==NULL or left==right) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* leftP;
        int i = 1;
        while (i<left){
            prev = prev->next;
            i++;
        }

        leftP = prev->next;
        ListNode* rightP = leftP;
        while (i<right){
            rightP = rightP->next;
            i+=1;
        }

        ListNode* nextP = rightP->next;
        rightP->next = NULL;
        ListNode* newHead = reverseList(leftP);
        prev->next = newHead;
        leftP->next = nextP;
        return dummy->next;



        
    }
};