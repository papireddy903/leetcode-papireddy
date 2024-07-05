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
        priority_queue<pair<int, ListNode*>, vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>> mheap;

        for (auto it : lists){
            if (it!=NULL)
            mheap.push({it->val, it});
        }

        ListNode* dummyHead = new ListNode(0);
        ListNode* temp = dummyHead;

        while (!mheap.empty()){
            auto mini = mheap.top(); mheap.pop();
            
            if (mini.second->next!=NULL){
                mheap.push({mini.second->next->val, mini.second->next});
            }
            temp->next = mini.second;
            temp = temp->next;
        }

        return dummyHead->next;




        
    }
};