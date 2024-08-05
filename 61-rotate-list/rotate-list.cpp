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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL) return NULL;
        ListNode* fast = head, *slow = head;
        int t = k;
        int len = 0;
        while (fast!=NULL){
            fast = fast->next;
            len++;
        }
        fast = head;
        t = t % len;
        
        while (t>0 and fast!=NULL and fast->next!=NULL){
            fast = fast->next;
            t-=1;
        }
        cout << fast->val << endl;
        
        while (fast!=NULL and fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        cout << "slow : " << slow->val << endl;
        cout << "fast : " << fast->val << endl;

        fast->next = head;
        ListNode* newHead = slow->next;
        slow->next = NULL;

        return newHead;

        
    }
};