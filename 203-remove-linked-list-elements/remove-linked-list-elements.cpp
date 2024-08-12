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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = NULL;
        ListNode* cur = head;

        while (cur!=NULL){
            if (cur->val==val){
                if (prev == NULL){
                    ListNode* delNode = head;
                    head = head->next;
                    cur = head;
                    delete delNode;
                }
                else if (cur->next == NULL){
                    prev->next = NULL;
                    delete cur;
                    break;
                }
                else{
                    cur = cur->next;
                    prev->next = cur;
                }
            }
            else{
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
        
    }
};