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
        ListNode* temp = head;
        int len = 0;
        while (temp!=NULL){
            temp = temp->next;
            len++;
        }
        if (n == len){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        // len = 5

        int pos = len - n-1;

        // pos = 5 - 1 = 4

        temp = head;
        int i = 0;
        while (i<pos){
            i++;
            temp = temp->next;
        }
        cout << temp->val << endl;
       
        ListNode* nextPointer = temp->next;
        temp->next = nextPointer->next;
        delete nextPointer;

        return head;
        
    }
};