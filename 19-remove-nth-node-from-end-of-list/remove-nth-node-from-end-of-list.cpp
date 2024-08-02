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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head, *slow = head;

        int i = 1;
        while (i<=n){
            fast = fast->next;
            i++;
        }

        if (fast == NULL){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        



        while (fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* nextNode = slow->next;
        slow->next = nextNode->next;
        delete nextNode;
        return head;

        
    }
};