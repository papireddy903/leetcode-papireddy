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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int> l;
        
        for (int i = 0;i<lists.size();i++){
            ListNode* temp = lists[i];
            while (temp!=NULL){
                l.push_back(temp->val);
                temp = temp->next;
            }
        }

        sort(l.begin(),l.end());

        ListNode* newHead = new ListNode(0);
        ListNode* temp = newHead;
        int i = 0;
        while (i<l.size()){
            
            ListNode* newnode = new ListNode(l[i]);
            temp->next = newnode;
            temp = newnode;
            i++;

            
        }
        
        return newHead->next;
    }
};