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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp = head;
        vector<int> arr;
        while (temp!=NULL and temp->next!=NULL){
            arr.push_back(temp->val);
            temp = temp->next->next;
        }
        if (temp){
            arr.push_back(temp->val);
        }
        if (head){
        ListNode* temp2 = head->next;

        while (temp2!=NULL and temp2->next!=NULL){
            arr.push_back(temp2-> val);
            temp2 = temp2->next->next;
        }
        }

        temp = head;
        for (int i = 0;i<arr.size();i++){
            temp->val = arr[i];
            temp = temp->next;
        }
        return head;
        
    }
};