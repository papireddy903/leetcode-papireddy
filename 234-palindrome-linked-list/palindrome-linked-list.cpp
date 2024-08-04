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
    private:
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* nextP;
        while (cur!=NULL){
            nextP = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nextP;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head, *slow = head;
        ListNode* temp = head;
        while (fast!=NULL and fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* halfHead = reverseList(slow);

        while (halfHead!=NULL){
            if (temp->val != halfHead->val){
                return false;
            }
            temp = temp->next;
            halfHead = halfHead->next;
        }
        return true;
        
    }
};